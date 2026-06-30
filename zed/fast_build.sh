if uname -a | grep Android
then
    DESTDIR=$HOME cpm install
else
    cpm build && sudo env DESTDIR=/usr/local cpm install
fi
