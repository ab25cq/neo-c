sh remove_all_build.sh

(echo vin && cd vin && sh fast_build.sh) && (echo zed && cd zed && sh fast_build.sh) && (echo shsh && cd shsh && sh fast_build.sh)

if uname -a | grep Android
then
    (echo mf && cd mf && neo-c header && neo-c compile && neo-c install $HOME)
else
    (echo mf && cd mf && neo-c header && neo-c compile && sudo neo-c install)
fi
