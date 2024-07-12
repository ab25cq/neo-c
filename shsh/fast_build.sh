if ! test -e Makefile
then
    if uname -a | grep Android
    then
        ./configure --prefix=$HOME --with-optimize

        make && make install
    else
        ./configure --with-optimize

        make && sudo make install
    fi
fi

if uname -a | grep Android
then
    make && make install
else
    make && sudo make install
fi
