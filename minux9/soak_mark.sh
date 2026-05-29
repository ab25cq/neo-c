uname
pwd
echo hello|cat
echo hello|grep hello
echo hello|cat|cat|cat|cat|cat
pwd|cat|cat|cat|cat|cat
touch soak1
echo one>soak1
cat soak1
mkdir -p soakdir/a
sleep 1
rmdir -p soakdir/a
echo TAILSTART
echo hello|grep nope|cat
echo hello|cat|grep nope
echo hello|grep hello|grep nope|cat
echo hello|cat|cat|grep nope
echo hello|grep hello
echo hello|cat|cat|cat
touch soak2
echo two>soak2
cat soak2
echo DONE
