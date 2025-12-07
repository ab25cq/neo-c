
# Mac
if uname | grep Darwin
then
    brew install git readline ncurses make autoconf libgc readline openssl 
# alpine linux
elif which apk > /dev/null
then
    sudo apk add sudo git clang gcc readline-dev ncurses-dev make autoconf valgrind gdb lldb musl-dev gc-dev readline-dev openssl-dev mariadb-connector-c-dev mariadb-client mariadb libdwarf-dev elfutils-dev
# termux
elif test `uname -o` = Android
then
    apt install which clang readline ncurses make autoconf valgrind gdb lldb binutils libandroid-glob libgc openssl mariadb libdwarf-dev libelf-dev libc6-dev
elif which pacman > /dev/null
then
    sudo pacman -S make valgrind readline ncurses clang gcc which openssl
elif which dnf > /dev/null
then
    sudo dnf install make valgrind readline-devel ncurses-devel clang gcc which openssl-devel 
elif which apt > /dev/null
then
    sudo apt install clang gcc libreadline-dev ncurses-dev make autoconf valgrind gdb lldb libssl-dev 
fi
