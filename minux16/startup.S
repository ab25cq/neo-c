    .section .vectors, "ax", @progbits
    .global __vectors
__vectors:
    rjmp __do_copy_data

    .section .text.startup, "ax", @progbits
    .global reset_handler
    .type reset_handler, @function
reset_handler:
    eor r1, r1
    ldi r28, lo8(0x21ff)
    ldi r29, hi8(0x21ff)
    out 0x3d, r28
    out 0x3e, r29
    call firmware_entry
    break
1:
    rjmp 1b
    .size reset_handler, .-reset_handler
