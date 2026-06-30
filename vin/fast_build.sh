if uname -a | grep raspberry
then
    DESTDIR=$HOME cpm install
elif uname -a | grep Android
then
    DESTDIR=$HOME cpm install
elif uname -a | grep Darwin
then
    cpm build && sudo env DESTDIR=/usr/local cpm install
else
    cpm build && sudo env DESTDIR=/usr/local cpm install
fi
