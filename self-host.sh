
if ! test -e Makefile
then
    sh install_pkg.sh
    
    if uname -a | grep Android
    then
        #./configure --with-optimize --prefix=$HOME
        #./configure --prefix=$HOME --with-debug --with-come-debug
        #./configure --prefix=$HOME --with-debug --with-optimize
        #./configure --prefix=$HOME --with-debug --with-optimize --with-original-position --with-gc
        #./configure --prefix=$HOME --with-debug --with-original-postion --with-leak
        ./configure --prefix=$HOME --with-debug --with-optimize #--with-original-position --with-debug --with-optimize
    else
        #./configure --with-optimize
        #./configure --with-debug --with-come-debug
        #./configure --with-debug --with-optimize
        #./configure --with-debug --with-optimize --with-original-position --with-gc
        #./configure --with-debug --with-original-position
        #./configure --with-debug --with-original-position --with-optimize --with-leak
       ./configure --with-debug #--with-come-debug #--with-original-position #--with-come-debug
    fi
fi

if uname -a | grep Android
then
    make neo-c && make install
else
    make neo-c && sudo make install
fi
