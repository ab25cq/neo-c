#!/bin/bash
set -eu

ROOT="$(cd "$(dirname "$0")" && pwd)"
CODE_DIR="$ROOT/code"

single_nc="$CODE_DIR/a_iter_leak_single_tmp.nc"
multi_nc="$CODE_DIR/a_iter_leak_multi_tmp.nc"

cleanup() {
    rm -f "$single_nc" "$multi_nc" \
        "$CODE_DIR/a_iter_leak_single_tmp.c" "$CODE_DIR/a_iter_leak_multi_tmp.c" \
        "$CODE_DIR/a_iter_leak_single_tmp" "$CODE_DIR/a_iter_leak_multi_tmp"
}

trap cleanup EXIT

cat > "$single_nc" <<'EOF'
#include <neo-c.h>

list<int>* make_list12345()
{
    return [1,2,3,4,5];
}

int main(int argc, char** argv)
{
    var a = make_list12345().`iter().`skip(2).`collect();
    xassert("single", a.length() == 3);
    return 0;
}
EOF

cat > "$multi_nc" <<'EOF'
#include <neo-c.h>

list<int>* make_list12345()
{
    return [1,2,3,4,5];
}

list<int>* make_list123456()
{
    return [1,2,3,4,5,6];
}

list<int>* make_list123()
{
    return [1,2,3];
}

int main(int argc, char** argv)
{
    var a = make_list12345().`iter().`skip(2).`collect();
    var b = make_list12345().`iter().`take_while { it < 4 }.`collect();
    var c = make_list123456().`iter().`step_by(2).`collect();
    int sum = 0;
    var d = make_list123().`iter().`inspect { sum += it; }.`collect();

    xassert("multi", a.length() == 3 && b.length() == 3 && c.length() == 3 && d.length() == 3 && sum == 6);
    return 0;
}
EOF

echo "[pattern 1] single collect result in one function"
(cd "$CODE_DIR" && ./neo-c-wrapper.sh "$(basename "$single_nc")" && ./a_iter_leak_single_tmp)

echo
echo "[pattern 2] multiple collect results in the same function"
(cd "$CODE_DIR" && ./neo-c-wrapper.sh "$(basename "$multi_nc")" && ./a_iter_leak_multi_tmp)

echo
echo "expected:"
echo "  pattern 1: no leak report"
echo "  pattern 2: leak report (12 memory leaks on current tree)"
