#!/bin/bash

ssh ab25cq@clover-lang.org bash -c '"rm -f clover3.tgz; cd repo/clover3; make distclean; cd ..; tar cvfz ~/clover3.tgz clover3"'
cd ..; rm -rf clover3
scp ab25cq@clover-lang.org:clover3.tgz .
tar xvfz clover3.tgz
cd .

