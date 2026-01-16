neo-c -S -pico main.c
cp main.c.c main_.c
rm main.c.c
neo-c -S -pico timer.c
cp timer.c.c timer_.c
rm timer.c.c
rm -rf build
mkdir build
(cd build; cmake .. && make)

#cp build/minux.uf2 /Volumes/RPI-RP2
