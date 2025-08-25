make clean
make || exit 1

# Parse all test C files in sorted order
for f in code/*.c; do
  [ -f "$f" ] || continue
  echo $f
  ./neo-c "$f" || exit 3
done
