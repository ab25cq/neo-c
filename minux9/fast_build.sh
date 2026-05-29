
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
                 qemu-system \
                 qemu-system-misc \
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
            qemu-system-riscv.x86_64 \
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
            qemu-system-riscv.aarch64 \
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
                make vim qemu-system-riscv
                
fi

if which apk
then
    $SUDO apk add binutils-riscv-none-elf binutils-riscv64 gcc-riscv-none-elf newlib-riscv-none-elf qemu-riscv64 make git gawk gdb-multiarch qemu-riscv64 qemu-riscv64 qemu-riscv64 qemu-riscv64 qemu-riscv64 qemu-riscv64 qemu-system-riscv64 gcc clang
    $SUDO apk add spike
fi

rm -rf ~/.config/gdb
mkdir -p ~/.config/gdb
echo "add-auto-load-safe-path $(pwd)/.gdbinit" >> ~/.config/gdb/gdbinit

make clean
if uname -a | grep Darwin
then
    make run
#   make debug-mac
elif which riscv64-linux-gnu-gcc
then
    make run CCPREFIX=riscv64-linux-gnu- RISCV_ABI=lp64d
elif which riscv-none-elf-gcc
then
    make run CCPREFIX=riscv-none-elf-
elif which riscv64-elf-gcc
then
    make run CCPREFIX=riscv64-elf-
else 
    make run
fi
