
sh install_pkg.sh

export RM="rm -rf"

if uname -a | grep Android
then
    make DESTDIR=$HOME CFLAGS_OPT="-O2" comelang && make DESTDIR=$HOME install
elif uname -a | grep Darwin
then
    make CFLAGS_OPT="-O2" comelang && sudo make install
else
    make CFLAGS_OPT="-O2" comelang && sudo make install
fi
