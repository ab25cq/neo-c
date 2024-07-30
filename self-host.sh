
sh install_pkg.sh

if uname -a | grep Android
then
    make DESTDIR=$HOME CFLAGS_OPT="" neo-c && make install
else
    make neo-c CFLAGS_OPT="" && sudo make install
fi

