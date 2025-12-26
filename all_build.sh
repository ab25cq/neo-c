sh remove_all_build.sh

if uname -a | grep Android
then
    (echo vin && cd vin && sh fast_build.sh) && (echo zed && cd zed && make DESTDIR=$HOME && make DESTDIR=$HOME install) && (echo shsh && cd shsh && make DESTDIR=$HOME && make DESTDIR=$HOME install) && (echo mf && cd mf && make DESTDIR=$HOME && make DESTDIR=$HOME install)
elif test -f /proc/device-tree/model && cat /proc/device-tree/model | grep "Raspberry Pi"
then
    (echo vin && cd vin && sh fast_build.sh) && (echo zed && cd zed && make && sudo make install) && (echo shsh && cd shsh && make && sudo make install) && (echo mf && cd mf && make && sudo make install)
else
    (echo code && cd code && make test) && (echo vin && cd vin && sh fast_build.sh) && (echo zed && cd zed && make && sudo make install) && (echo shsh && cd shsh && make && sudo make install) && (echo mf && cd mf && make && sudo make install)
fi

