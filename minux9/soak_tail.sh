echo hello|grep nope|cat
echo hello|cat|grep nope
echo hello|grep hello|grep nope|cat
echo hello|cat|cat|grep nope
echo hello|grep hello
echo hello|cat|cat|cat
touch soak2
echo two>soak2
cat soak2
