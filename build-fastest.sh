#make ncc ALLOCATOR=jemalloc
#make ncc ALLOCATOR=mimalloc
sh fast_build.sh
make ncc
sh self-host.sh
make pgo

