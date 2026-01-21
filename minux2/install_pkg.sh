# Mac
if uname | grep Darwin
then
    brew update
    brew install cmake ninja git
#    brew install arm-none-eabi-gcc
#    open https://developer.arm.com/downloads/-/gnu-rm
#    brew tap ArmMbed/homebrew-formulae
    brew install --cask gcc-arm-embedded
#    brew install arm-none-eabi-gcc
    
    
    echo 'export PATH=/Applications/ARM/bin/:$PATH' >> ~/.zshrc
       
    mkdir -p ~/pico
    cd ~/pico
    git clone https://github.com/raspberrypi/pico-sdk.git
    cd pico-sdk
    git submodule update --init
    
    echo 'export PICO_SDK_PATH=$HOME/pico/pico-sdk' >> ~/.zshrc
    source ~/.zshrc
fi
