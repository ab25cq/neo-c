#!/bin/bash

if [ -e Makefile ]
then
    make distclean
fi
if [ -e wi/Makefile ]
then
    (cd wi; make distclean)
fi
if [ -e tiny/Makefile ]
then
    (cd tiny; make distclean)
fi
if [ -e clover3/Makefile ]
then
    (cd clover3; make distclean)
fi
if [ -e ayataka/Makefile ]
then
    (cd ayataka; make distclean)
fi

if [ -e self-host/Makefile ]
then
    (cd self-host; make distclean)
fi

rm -rf clover3
cp -a ../clover3 .
rm -rf clover3/.git

rm -rf wi
cp -a ../wi .
rm -rf wi/.git

if [ ! -e Makefile ]
then
    git add .
    git commit 
    git remote add origin https://github.com/ab25cq/neo-c.git
    git push -f -u origin master
fi

