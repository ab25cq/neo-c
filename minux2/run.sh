cp build/minux.uf2 /Volumes/RPI-RP2
rm -Rf build
sleep 3
screen /dev/tty.usbmodem*
