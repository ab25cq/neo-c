sh remove_all_build.sh
echo aaa
if uname -m | grep aarch64
then
    (echo vin && cd vin && sh fast_build.sh) && (echo zed && cd zed && make && sudo make install) && (echo shsh && cd shsh && make && sudo make install) && (echo mf && cd mf && make && sudo make install)
else
    (echo code && cd code && make test) && (echo vin && cd vin && sh fast_build.sh) && (echo zed && cd zed && make && sudo make install) && (echo shsh && cd shsh && make && sudo make install) && (echo mf && cd mf && make && sudo make install)
fi

