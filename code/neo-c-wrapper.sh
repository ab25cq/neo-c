#!/bin/sh
set -eu

is_darwin=0
if [ "$(uname -s 2>/dev/null || echo unknown)" = "Darwin" ]; then
  is_darwin=1
fi

if [ "$#" -lt 1 ]; then
  echo "usage: neo-c-wrapper.sh <input.nc> [opts]" >&2
  exit 2
fi

(cd .. && make ncc)
# 1) Transpile via local ncc (uses repo ccpp.c)
"$(dirname "$0")/../ncc" -I.. "$@"

input=""
out=""
pass_next=0
skip_next=0
extra_flags=""

for arg in "$@"; do
  if [ "$skip_next" -eq 1 ]; then
    out="$arg"
    skip_next=0
    continue
  fi

  case "$arg" in
    *.nc)
      input="$arg"
      ;;
    -o)
      skip_next=1
      ;;
    -o*)
      out="${arg#-o}"
      ;;
    -I)
      pass_next=1
      ;;
    -latomic)
      if [ "$is_darwin" -eq 0 ]; then
        extra_flags="$extra_flags '$arg'"
      fi
      ;;
    -I*|-D*|-U*|-L*|-l*|-Wl,*|-W*|-O*|-g|-pthread|-f*|-m*|-std=*)
      extra_flags="$extra_flags '$arg'"
      ;;
    -gcc)
      # neo-c specific frontend switch; not for clang stage
      ;;
    -*)
      # Ignore other frontend-only switches for now.
      ;;
    *)
      ;;
  esac

  if [ "$pass_next" -eq 1 ]; then
    pass_next=0
    continue
  fi
done

if [ -z "$input" ]; then
  echo "neo-c-wrapper: no input .nc file" >&2
  exit 2
fi

base=$(basename "$input" .nc)
cfile="${base}.c"

if [ -z "$out" ]; then
  out="$base"
fi

if [ ! -f "$cfile" ]; then
  echo "neo-c-wrapper: generated C file not found: $cfile" >&2
  exit 2
fi

link_neo_c_str=false
if rg -q 'string_scan|string_match|charp_scan|charp_match|charp_index_regex|string_index_regex|charp_split|string_split|re_match' "$cfile"; then
  link_neo_c_str=true
fi

neo_c_str_flag=""
if [ "$link_neo_c_str" = true ]; then
  neo_c_str_flag="/usr/local/lib/neo-c-str.o"
fi

# shellcheck disable=SC2086
# extra_flags contains safely single-quoted tokens.
eval "clang '$cfile' -o '$out' $extra_flags $neo_c_str_flag"
