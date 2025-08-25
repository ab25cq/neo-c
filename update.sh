#!/bin/sh

export EDITOR=vin
git config --global user.email ab25cq@icloud.com
git config --global user.name ab25cq

#sh remove_all_build.sh

make clean

git add .
git commit 
git remote add origin https://github.com/ab25cq/neo-c.git
git push -u origin main



