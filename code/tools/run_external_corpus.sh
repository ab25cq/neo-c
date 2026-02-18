#!/usr/bin/env bash
set -euo pipefail

SCRIPT_DIR="$(cd "$(dirname "$0")" && pwd)"
CODE_DIR="$(cd "$SCRIPT_DIR/.." && pwd)"

MANIFEST="${EXTERNAL_CORPUS_MANIFEST:-$CODE_DIR/external_corpus.manifest}"
CORPUS_DIR="${EXTERNAL_CORPUS_DIR:-$CODE_DIR/external_corpus}"
OUT_DIR="${EXTERNAL_CORPUS_OUT_DIR:-$CODE_DIR/reports/external_corpus}"
NEOC="${EXTERNAL_CORPUS_NEOC:-neo-c}"
HOST_CC="${HOSTCC:-cc}"
HOST_CFLAGS_VALUE="${HOSTCFLAGS:--std=c11 -Wall -Wextra -O2}"
NEOCFLAGS_VALUE="${EXTERNAL_CORPUS_NEOCFLAGS:-}"
RUN_TIMEOUT_SEC="${EXTERNAL_CORPUS_TIMEOUT_SEC:-0}"
REQUIRE_CONFIG="${EXTERNAL_CORPUS_REQUIRE:-0}"
KEEP_TMP="${EXTERNAL_CORPUS_KEEP_TMP:-0}"

mkdir -p "$OUT_DIR"
CSV_REPORT="$OUT_DIR/report.csv"
MD_REPORT="$OUT_DIR/report.md"
TMP_ROOT="$OUT_DIR/.tmp"
MD_ROWS_TMP="$OUT_DIR/.rows.tmp"
: > "$CSV_REPORT"
rm -rf "$TMP_ROOT"
mkdir -p "$TMP_ROOT"
: > "$MD_ROWS_TMP"

timestamp_utc="$(date -u '+%Y-%m-%dT%H:%M:%SZ')"

trim() {
    local value="$1"
    value="${value#"${value%%[![:space:]]*}"}"
    value="${value%"${value##*[![:space:]]}"}"
    printf '%s' "$value"
}

csv_escape() {
    local value="$1"
    value="${value//$'\r'/}"
    value="${value//$'\n'/\\n}"
    value="${value//\"/\"\"}"
    printf '"%s"' "$value"
}

md_escape() {
    local value="$1"
    value="${value//|/\\|}"
    value="${value//$'\n'/ }"
    printf '%s' "$value"
}

run_binary() {
    local bin_path="$1"
    local stdout_path="$2"
    local stderr_path="$3"

    if [ "$RUN_TIMEOUT_SEC" -gt 0 ] && command -v timeout >/dev/null 2>&1; then
        timeout "${RUN_TIMEOUT_SEC}s" "$bin_path" >"$stdout_path" 2>"$stderr_path"
    else
        "$bin_path" >"$stdout_path" 2>"$stderr_path"
    fi
}

write_csv_row() {
    local first=1
    local field

    for field in "$@"; do
        if [ $first -eq 1 ]; then
            first=0
        else
            printf ',' >> "$CSV_REPORT"
        fi
        csv_escape "$field" >> "$CSV_REPORT"
    done
    printf '\n' >> "$CSV_REPORT"
}

write_csv_row \
    "case" \
    "status" \
    "mode" \
    "source" \
    "host_compile_rc" \
    "neo_compile_rc" \
    "host_run_rc" \
    "neo_run_rc" \
    "stdout_match" \
    "note"

if [ ! -f "$MANIFEST" ]; then
    {
        echo "# External Corpus Report"
        echo
        printf -- '- Generated: `%s`\n' "$timestamp_utc"
        printf -- '- Manifest: `%s`\n' "$MANIFEST"
        echo "- Result: skipped (manifest not found)"
    } > "$MD_REPORT"

    if [ "$REQUIRE_CONFIG" = "1" ]; then
        echo "external-corpus: manifest not found and EXTERNAL_CORPUS_REQUIRE=1: $MANIFEST" >&2
        rm -f "$MD_ROWS_TMP"
        [ "$KEEP_TMP" = "1" ] || rm -rf "$TMP_ROOT"
        exit 1
    fi

    echo "external-corpus: skipped (manifest not found): $MANIFEST"
    rm -f "$MD_ROWS_TMP"
    [ "$KEEP_TMP" = "1" ] || rm -rf "$TMP_ROOT"
    exit 0
fi

if [ ! -x "$(command -v "$NEOC" 2>/dev/null || true)" ]; then
    echo "external-corpus: neo-c compiler not found: $NEOC" >&2
    rm -f "$MD_ROWS_TMP"
    [ "$KEEP_TMP" = "1" ] || rm -rf "$TMP_ROOT"
    exit 1
fi

if [ ! -x "$(command -v "$HOST_CC" 2>/dev/null || true)" ]; then
    echo "external-corpus: host compiler not found: $HOST_CC" >&2
    rm -f "$MD_ROWS_TMP"
    [ "$KEEP_TMP" = "1" ] || rm -rf "$TMP_ROOT"
    exit 1
fi

if [ "$RUN_TIMEOUT_SEC" -gt 0 ] && ! command -v timeout >/dev/null 2>&1; then
    echo "external-corpus: warning: timeout command not found, running without timeout" >&2
fi

declare -a HOST_CFLAGS_ARR=()
declare -a NEOCFLAGS_ARR=()
read -r -a HOST_CFLAGS_ARR <<< "$HOST_CFLAGS_VALUE"
read -r -a NEOCFLAGS_ARR <<< "$NEOCFLAGS_VALUE"

TOTAL=0
PASS=0
FAIL=0
SKIP=0
INDEX=0

while IFS= read -r raw_line || [ -n "$raw_line" ]; do
    INDEX=$((INDEX + 1))
    line="${raw_line%$'\r'}"
    trimmed_line="$(trim "$line")"

    if [ -z "$trimmed_line" ]; then
        continue
    fi
    case "$trimmed_line" in
        \#*)
            continue
            ;;
    esac

    case_name=""
    rel_source=""
    mode=""
    case_host_flags=""
    case_neo_flags=""
    case_link_flags=""

    IFS='|' read -r case_name rel_source mode case_host_flags case_neo_flags case_link_flags _rest <<< "$line"

    case_name="$(trim "$case_name")"
    rel_source="$(trim "$rel_source")"
    mode="$(trim "$mode")"
    case_host_flags="$(trim "$case_host_flags")"
    case_neo_flags="$(trim "$case_neo_flags")"
    case_link_flags="$(trim "$case_link_flags")"

    if [ -z "$mode" ]; then
        mode="run"
    fi
    if [ -z "$case_name" ] && [ -n "$rel_source" ]; then
        case_name="$(basename "$rel_source")"
    fi

    if [ -z "$case_name" ] || [ -z "$rel_source" ]; then
        TOTAL=$((TOTAL + 1))
        FAIL=$((FAIL + 1))
        write_csv_row "line-$INDEX" "fail" "$mode" "$rel_source" "" "" "" "" "na" "manifest parse error: name and source are required"
        printf '| %s | %s | %s | %s | %s | %s |\n' \
            "line-$INDEX" \
            "fail" \
            "$(md_escape "$mode")" \
            "-" \
            "-" \
            "$(md_escape "manifest parse error: name and source are required")" >> "$MD_ROWS_TMP"
        continue
    fi

    if [ "$mode" != "run" ] && [ "$mode" != "compile" ] && [ "$mode" != "compile-only" ]; then
        TOTAL=$((TOTAL + 1))
        FAIL=$((FAIL + 1))
        write_csv_row "$case_name" "fail" "$mode" "$rel_source" "" "" "" "" "na" "unsupported mode ($mode): use run, compile, or compile-only"
        printf '| %s | %s | %s | %s | %s | %s |\n' \
            "$(md_escape "$case_name")" \
            "fail" \
            "$(md_escape "$mode")" \
            "-" \
            "-" \
            "$(md_escape "unsupported mode")" >> "$MD_ROWS_TMP"
        continue
    fi

    if [[ "$rel_source" = /* ]]; then
        source_path="$rel_source"
    else
        source_path="$CORPUS_DIR/$rel_source"
    fi

    TOTAL=$((TOTAL + 1))

    if [ ! -f "$source_path" ]; then
        FAIL=$((FAIL + 1))
        write_csv_row "$case_name" "fail" "$mode" "$source_path" "" "" "" "" "na" "source file not found"
        printf '| %s | %s | %s | %s | %s | %s |\n' \
            "$(md_escape "$case_name")" \
            "fail" \
            "$(md_escape "$mode")" \
            "-" \
            "-" \
            "$(md_escape "source file not found")" >> "$MD_ROWS_TMP"
        continue
    fi

    safe_name="$(printf '%s' "$case_name" | tr -c 'A-Za-z0-9._-' '_')"
    case_dir="$TMP_ROOT/$(printf '%03d_%s' "$TOTAL" "$safe_name")"
    mkdir -p "$case_dir"

    host_bin="$case_dir/host.out"
    host_compile_stdout="$case_dir/host.compile.out"
    host_compile_stderr="$case_dir/host.compile.err"
    host_run_stdout="$case_dir/host.run.out"
    host_run_stderr="$case_dir/host.run.err"

    neo_source="$case_dir/source.nc"
    neo_bin="$case_dir/source"
    neo_compile_stdout="$case_dir/neo.compile.out"
    neo_compile_stderr="$case_dir/neo.compile.err"
    neo_run_stdout="$case_dir/neo.run.out"
    neo_run_stderr="$case_dir/neo.run.err"

    cp "$source_path" "$neo_source"

    declare -a CASE_HOST_FLAGS_ARR=()
    declare -a CASE_NEO_FLAGS_ARR=()
    declare -a CASE_LINK_FLAGS_ARR=()

    read -r -a CASE_HOST_FLAGS_ARR <<< "$case_host_flags"
    read -r -a CASE_NEO_FLAGS_ARR <<< "$case_neo_flags"
    read -r -a CASE_LINK_FLAGS_ARR <<< "$case_link_flags"

    source_dir="$(cd "$(dirname "$source_path")" && pwd)"

    set +e
    "$HOST_CC" \
        "${HOST_CFLAGS_ARR[@]}" \
        "${CASE_HOST_FLAGS_ARR[@]}" \
        "$source_path" \
        "${CASE_LINK_FLAGS_ARR[@]}" \
        -o "$host_bin" >"$host_compile_stdout" 2>"$host_compile_stderr"
    host_compile_rc=$?
    set -e

    set +e
    "$NEOC" \
        "${NEOCFLAGS_ARR[@]}" \
        "${CASE_NEO_FLAGS_ARR[@]}" \
        "-I$source_dir" \
        "$neo_source" \
        "${CASE_LINK_FLAGS_ARR[@]}" >"$neo_compile_stdout" 2>"$neo_compile_stderr"
    neo_compile_rc=$?
    set -e

    host_run_rc=""
    neo_run_rc=""
    stdout_match="na"
    note=""
    status="fail"

    if [ "$host_compile_rc" -ne 0 ] || [ "$neo_compile_rc" -ne 0 ]; then
        if [ "$host_compile_rc" -ne 0 ] && [ "$neo_compile_rc" -ne 0 ]; then
            status="pass"
            note="both compilers rejected"
        else
            status="fail"
            if [ "$host_compile_rc" -ne 0 ]; then
                note="host compile failed but neo-c compiled"
            else
                note="neo-c compile failed but host compiled"
            fi
        fi
    else
        if [ "$mode" = "compile" ] || [ "$mode" = "compile-only" ]; then
            status="pass"
            note="both compilers accepted ($mode)"
        else
            set +e
            run_binary "$host_bin" "$host_run_stdout" "$host_run_stderr"
            host_run_rc=$?
            run_binary "$neo_bin" "$neo_run_stdout" "$neo_run_stderr"
            neo_run_rc=$?
            set -e

            if cmp -s "$host_run_stdout" "$neo_run_stdout"; then
                stdout_match="yes"
            else
                stdout_match="no"
            fi

            if [ "$host_run_rc" = "$neo_run_rc" ] && [ "$stdout_match" = "yes" ]; then
                status="pass"
                note="runtime matched"
            elif [ "$host_run_rc" != "$neo_run_rc" ] && [ "$stdout_match" = "no" ]; then
                status="fail"
                note="runtime return code and stdout differ"
            elif [ "$host_run_rc" != "$neo_run_rc" ]; then
                status="fail"
                note="runtime return code differs"
            else
                status="fail"
                note="runtime stdout differs"
            fi
        fi
    fi

    if [ "$status" = "pass" ]; then
        PASS=$((PASS + 1))
    elif [ "$status" = "skip" ]; then
        SKIP=$((SKIP + 1))
    else
        FAIL=$((FAIL + 1))
    fi

    write_csv_row \
        "$case_name" \
        "$status" \
        "$mode" \
        "$source_path" \
        "$host_compile_rc" \
        "$neo_compile_rc" \
        "$host_run_rc" \
        "$neo_run_rc" \
        "$stdout_match" \
        "$note"

    printf '| %s | %s | %s | %s | %s | %s |\n' \
        "$(md_escape "$case_name")" \
        "$status" \
        "$(md_escape "$mode")" \
        "$host_compile_rc" \
        "$neo_compile_rc" \
        "$(md_escape "$note")" >> "$MD_ROWS_TMP"
done < "$MANIFEST"

{
    echo "# External Corpus Report"
    echo
    printf -- '- Generated: `%s`\n' "$timestamp_utc"
    printf -- '- Manifest: `%s`\n' "$MANIFEST"
    printf -- '- Corpus directory: `%s`\n' "$CORPUS_DIR"
    echo "- Total cases: $TOTAL"
    echo "- Passed: $PASS"
    echo "- Failed: $FAIL"
    echo "- Skipped: $SKIP"
    echo
    echo "| Case | Status | Mode | Host compile rc | neo-c compile rc | Note |"
    echo "|---|---|---|---:|---:|---|"
    if [ -s "$MD_ROWS_TMP" ]; then
        cat "$MD_ROWS_TMP"
    else
        echo "| - | skip | - | - | - | no active cases in manifest |"
    fi
} > "$MD_REPORT"

rm -f "$MD_ROWS_TMP"

if [ "$KEEP_TMP" != "1" ]; then
    rm -rf "$TMP_ROOT"
fi

if [ "$FAIL" -ne 0 ]; then
    echo "external-corpus: $FAIL failing case(s). See $MD_REPORT and $CSV_REPORT" >&2
    exit 1
fi

echo "external-corpus: pass ($PASS/$TOTAL). Reports: $MD_REPORT $CSV_REPORT"
