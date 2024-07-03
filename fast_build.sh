
if ! test -e Makefile
then
    sh install_pkg.sh
    
    if uname -a | grep Android
    then
        #./configure --with-optimize --prefix=$HOME
        ./configure --with-optimize --prefix=$HOME --with-debug
    else
        #./configure --with-optimize
        ./configure --with-optimize --with-debug
    fi
fi
        
if uname -a | grep Android
then
    make && make install
else
    make && sudo make install
fi
