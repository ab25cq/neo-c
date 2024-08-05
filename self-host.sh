
sh install_pkg.sh

export RM="rm -rf"

if uname -a | grep Android
then
    make DESTDIR=$HOME CFLAGS_OPT="-D__ANDROID__" neo-c && make DESTDIR=$HOME install
elif uname -a | grep Darwin
then
    make CFLAGS_OPT="-D__MAC__" neo-c && sudo make install
else
    make CFLAGS_OPT="-D__LINUX__" neo-c && sudo make install
fi
