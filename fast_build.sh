
sh install_pkg.sh

if uname -a | grep Android
then
    make DESTDIR=$HOME && make install
else
    make && sudo make install
fi
