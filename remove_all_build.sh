

if [ -e Makefile ]
then
    make distclean
fi

if [ -e vin/Makefile ]
then
    (cd vin; make distclean)
fi

if [ -e trueby/Makefile ]
then
    (cd trueby; make clean)
fi

if [ -e zed/Makefile ]
then
    (cd zed; make distclean)
fi

if [ -e mf/Makefile ]
then
    (cd mf; neo-c clean)
fi

if [ -e shsh/Makefile ]
then
    (cd shsh; make distclean)
fi
