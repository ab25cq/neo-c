# Mac
if uname | grep Darwin
then
    brew install git readline ncurses make autoconf openssl 
# alpine linux
elif command -v apk > /dev/null
then
    sudo apk add sudo git clang gcc readline-dev ncurses-dev make autoconf valgrind gdb lldb musl-dev readline-dev openssl-dev libdwarf-dev elfutils-dev
# termux
elif test `uname -o` = Android
then
    apt install which clang readline ncurses make autoconf valgrind gdb lldb binutils libandroid-glob openssl
elif uname -a | grep Raspbian
then
    sudo apt install clang gcc libreadline-dev ncurses-dev make autoconf gdb lldb libssl-dev 
elif command -v pacman > /dev/null
then
    sudo pacman -S make valgrind readline ncurses clang gcc which openssl
elif command -v dnf > /dev/null
then
    sudo dnf install make valgrind readline-devel ncurses-devel clang gcc which openssl-devel 
elif command -v apt > /dev/null
then
    sudo apt install clang gcc libreadline-dev ncurses-dev make autoconf valgrind gdb lldb libssl-dev 
fi
