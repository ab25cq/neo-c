#make ncc ALLOCATOR=jemalloc
#make ncc ALLOCATOR=mimalloc
make ncc
sh self-host.sh
make pgo

