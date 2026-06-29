
(cd tcc; make clean)
(cd lcc; make clean)
(cd 9cc; make clean)
(cd cinatora; make clean)
(cd code; make clean)
(cd code2; make clean)
(cd code3; make clean)

if [ -e Makefile ]
then
    make clean
fi

if [ -e minux9/Makefile ]
then
    (cd minux9; make clean)
fi
if [ -e minux10/Makefile ]
then
    (cd minux10; make clean)
fi
if [ -e minux11/Makefile ]
then
    (cd minux11; make clean)
fi
if [ -e minux12/Makefile ]
then
    (cd minux12; make clean)
fi
if [ -e minux13/Makefile ]
then
    (cd minux13; make clean)
fi
if [ -e minux14/Makefile ]
then
    (cd minux14; make clean)
fi
if [ -e minux15/Makefile ]
then
    (cd minux15; make clean)
fi

if [ -e vin/Makefile ]
then
    (cd vin; make clean)
fi

(cd codb; make clean)

if [ -e webweb/Makefile ]
then
    (cd webweb; sh clean_build.sh)
fi

(cd pico; rm -rf build)
(cd minux; rm -rf build)
(cd minux2; rm -rf build)
(cd minux5; make clean)
(cd sd; rm -rf build)
(cd pcre; rm -rf build)
(cd minux3; make clean)
(cd minux5; make clean)
(cd minux6; make clean)
(cd minux7; make clean)
(cd minux8; make clean)
echo aaa
(cd minux9; make clean)
echo aaa
(cd webweb; sh clean_build.sh)
(cd webweb/cgi-bin; make clean)
(cd xv6-riscv; make clean)
(cd cinatora; make clean)
(make -C code clean)
(make -C code2 clean)
(make -C code3 clean)
(make -C code4 clean)
(make -C code5 clean)
(make -C code6 clean)

if [ -e viw/Makefile ]
then
    (cd viw; make clean)
fi

if [ -e zed/Makefile ]
then
    (cd zed; make clean)
fi

if [ -e mf/Makefile ]
then
    (cd mf; make clean)
fi

if [ -e shsh/Makefile ]
then
    (cd shsh; make clean)
fi

if [ -e cpm/Makefile ]
then
    (cd cpm; make clean)
fi

if [ -e dbdb/Makefile ]
then
    (cd dbdb; make clean)
fi

if [ -e dbdb/client/Makefile ]
then
    (cd dbdb/client; make clean)
fi

echo aaac
