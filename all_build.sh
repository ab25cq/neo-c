sh remove_all_build.sh

run_code_targets() {
    make -C code &&
    if [ "${RUN_EXTERNAL_CORPUS:-0}" = "1" ]; then make -C code external-corpus; fi &&
    make -C code2 &&
    make -C code3 &&
    make -C code4 &&
    make -C code5
}

if uname -a | grep Android
then
    (echo vin && cd vin && sh fast_build.sh) && (echo zed && cd zed && make DESTDIR=$HOME && make DESTDIR=$HOME install) && (echo shsh && cd shsh && make DESTDIR=$HOME && make DESTDIR=$HOME install) && (echo mf && cd mf && make DESTDIR=$HOME && make DESTDIR=$HOME install)
elif test -f /proc/device-tree/model && cat /proc/device-tree/model | grep "Raspberry Pi"
then
    (echo vin && cd vin && sh fast_build.sh) && (echo zed && cd zed && make && sudo make install) && (echo shsh && cd shsh && make && sudo make install) && (echo mf && cd mf && make && sudo make install)
elif uname -a | grep Linux
then
    run_code_targets &&
    (echo vin && cd vin && sh fast_build.sh) && (echo zed && cd zed && make && sudo make install) && (echo shsh && cd shsh && make && sudo make install) && (echo mf && cd mf && make && sudo make install)
else
    run_code_targets &&
    (echo vin && cd vin && sh fast_build.sh) && (echo zed && cd zed && make && sudo make install) && (echo shsh && cd shsh && make && sudo make install) && (echo mf && cd mf && make && sudo make install)
fi
