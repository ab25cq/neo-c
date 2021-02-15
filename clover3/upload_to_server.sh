#!/bin/bash

if [ -e Makefile ]
then
    make distclean
fi

if [ ! -e Makefile ]
then
    (cd ..; tar cvfz clover3.tgz clover3)
    (cd ..; scp clover3.tgz ab25cq@clover-lang.org:)
    ssh ab25cq@clover-lang.org bash -c '"cp -f clover3.tgz repo/; cd repo; rm -rf clover3; tar xvfz clover3.tgz"'
fi

