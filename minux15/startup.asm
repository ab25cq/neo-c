        include "p16f877a.inc"

        extern _main
        global __sdcc_gsinit_startup

startup_code code
__sdcc_gsinit_startup:
        pagesel _main
        call _main
stop_loop
        goto stop_loop

        end
