(cd wi; make distclean)
(cd ayataka; make distclean)
(cd clover3; make distclean)
make distclean

./configure --with-optimize --prefix=$HOME && make && make install && make test && cd clover3 && ./configure --prefix=$HOME --with-optimize && make && make install && make test && cd ../wi && ./configure --with-optimize --prefix=$HOME && make && make install && cd ../ayataka && ./configure --prefix=$HOME --with-optimize && make && make install
