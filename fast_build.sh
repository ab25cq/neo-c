sh install_pkg.sh

export RM="rm -rf"

lowmem=0

for arg in "$@"
do
    case "$arg" in
        -lowmem|--lowmem)
            lowmem=1
            ;;
    esac
done

detect_make_jobs() {
    if uname -a | grep Android >/dev/null 2>&1
    then
        jobs=$(getconf _NPROCESSORS_ONLN 2>/dev/null)
    elif uname -a | grep Darwin >/dev/null 2>&1
    then
        jobs=$(sysctl -n hw.logicalcpu 2>/dev/null)
    else
        jobs=$(nproc 2>/dev/null)
    fi
    
    if test -z "$jobs" || test "$jobs" -le 1
    then
        jobs=1
    fi
    
    echo "$jobs"
}

MAKE_JOBS=$(detect_make_jobs)

run_make() {
    if test "$lowmem" = 1
    then
        LOWMEM=1 make "$@"
    else
        make -j"$MAKE_JOBS" "$@"
    fi
}

run_sudo_make() {
    if test "$lowmem" = 1
    then
        sudo env LOWMEM=1 make "$@"
    else
        sudo make -j"$MAKE_JOBS" "$@"
    fi
}

touch *.c

if uname -a | grep Android
then
    run_make DESTDIR=$HOME CFLAGS_OPT="-D__ANDROID__=1" && run_make DESTDIR=$HOME install
elif test -f /proc/device-tree/model && cat /proc/device-tree/model | grep "Raspberry Pi"
then
    if getconf LONG_BIT | grep 32
    then
        run_make CFLAGS_OPT="-D__LINUX__=1 -D__32BIT_CPU__=1" && run_sudo_make install
    else
        run_make CFLAGS_OPT="-D__LINUX__=1" && run_sudo_make install
    fi
elif uname -a | grep Darwin
then
    run_make CFLAGS_OPT="-D__MAC__=1" && run_sudo_make install
else
    run_make CFLAGS_OPT="-D__LINUX__=1" && run_sudo_make install
fi
