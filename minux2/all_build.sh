neo-c -S -pico main.c
cp main.c.c main_.c
rm main.c.c
rm -rf build
mkdir build
(cd build; cmake .. && make)

#cp build/minux.uf2 /Volumes/RPI-RP2
