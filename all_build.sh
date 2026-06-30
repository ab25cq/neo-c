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
    (echo vin && cd vin && DESTDIR=$HOME cpm install) && (echo zed && cd zed && DESTDIR=$HOME cpm install) && (echo shsh && cd shsh && DESTDIR=$HOME cpm install) && (echo mf && cd mf && DESTDIR=$HOME cpm install) && (echo cinatora && cd cinatora && DESTDIR=$HOME cpm install) && (echo cpm && cd cpm && make DESTDIR=$HOME && make DESTDIR=$HOME install)
elif test -f /proc/device-tree/model && cat /proc/device-tree/model | grep "Raspberry Pi"
then
    (echo vin && cd vin && cpm build && sudo env DESTDIR=/usr/local cpm install) && (echo zed && cd zed && cpm build && sudo env DESTDIR=/usr/local cpm install) && (echo shsh && cd shsh && cpm build && sudo env DESTDIR=/usr/local cpm install) && (echo mf && cd mf && cpm build && sudo env DESTDIR=/usr/local cpm install) && (echo cinatora && cd cinatora && cpm build && sudo env DESTDIR=/usr/local cpm install) && (echo cpm && cd cpm && make && sudo make install)
elif uname -a | grep Linux
then
    run_code_targets &&
    (echo vin && cd vin && cpm build && sudo env DESTDIR=/usr/local cpm install) && (echo zed && cd zed && cpm build && sudo env DESTDIR=/usr/local cpm install) && (echo shsh && cd shsh && cpm build && sudo env DESTDIR=/usr/local cpm install) && (echo mf && cd mf && cpm build && sudo env DESTDIR=/usr/local cpm install) && (echo cinatora && cd cinatora && cpm build && sudo env DESTDIR=/usr/local cpm install) && (echo cpm && cd cpm && make && sudo make install)
else
    run_code_targets &&
    (echo vin && cd vin && cpm build && sudo env DESTDIR=/usr/local cpm install) && (echo zed && cd zed && cpm build && sudo env DESTDIR=/usr/local cpm install) && (echo shsh && cd shsh && cpm build && sudo env DESTDIR=/usr/local cpm install) && (echo mf && cd mf && cpm build && sudo env DESTDIR=/usr/local cpm install) && (echo cinatora && cd cinatora && cpm build && sudo env DESTDIR=/usr/local cpm install) && (echo cpm && cd cpm && make && sudo make install)
fi
