if uname -a | grep Android
then
    make DESTDIR=$HOME && make DESTDIR=$HOME && make DESTDIR=$HOME install
else
    make && sudo neo-c install
fi
