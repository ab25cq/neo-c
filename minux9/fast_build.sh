
if [ "$(id -u)" = "0" ]; then
    SUDO=
else
    SUDO=sudo
fi

if which apt
then
    $SUDO apt-get update
    $SUDO apt-get install -y gcc-riscv64-linux-gnu \
                 binutils-riscv64-linux-gnu \
                 make \
                 git \
                 gcc \
                 clang \
                 build-essential \
                 gawk \
                 gdb-multiarch xxd
fi

if which dnf
then
    if uname -a | grep x86
    then
        $SUDO dnf install \
            gcc-riscv64-linux-gnu.x86_64 \
            binutils-riscv64-linux-gnu.x86_64 \
                    make \
                        git \
                        gcc \
                        clang \
                                gawk \
                                        vim-common gcc glibc-devel.x86_64
    else
        $SUDO dnf install \
            gcc-riscv64-linux-gnu.aarch64 \
            binutils-riscv64-linux-gnu.aarch64 \
                    make \
                        git \
                        gcc \
                        clang \
                                gawk \
                                        vim-common gcc glibc-devel.aarch64
    fi
fi

if which pacman
then
$SUDO pacman -Syu \
  riscv64-elf-gcc \
    riscv64-elf-binutils \
      make \
        git \
          base-devel \
            gawk \
            gcc \
            clang \
                make vim 
                
fi

if which apk
then
    $SUDO apk add binutils-riscv-none-elf binutils-riscv64 gcc-riscv-none-elf newlib-riscv-none-elf make git gawk gdb-multiarch gcc clang
    $SUDO apk add spike
fi

rm -rf ~/.config/gdb
mkdir -p ~/.config/gdb
echo "add-auto-load-safe-path $(pwd)/.gdbinit" >> ~/.config/gdb/gdbinit
JOBS="$(getconf _NPROCESSORS_ONLN 2>/dev/null || echo 4)"

make clean

if uname -a | grep Darwin
then
    make -j"$JOBS" run
#   make debug-mac
elif which riscv64-linux-gnu-gcc
then
    make -j"$JOBS" run CCPREFIX=riscv64-linux-gnu- RISCV_ABI=lp64d
elif which riscv-none-elf-gcc
then
    make -j"$JOBS" run CCPREFIX=riscv-none-elf-
elif which riscv64-elf-gcc
then
    make -j"$JOBS" run CCPREFIX=riscv64-elf-
else 
    make -j"$JOBS" run
fi
