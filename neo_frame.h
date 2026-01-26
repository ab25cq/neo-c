// neo_frame.h
#pragma once

typedef struct neo_frame {
    struct neo_frame *prev;
    unsigned long ret_pc;   // return address (PC)
} neo_frame_t;
    
extern __thread neo_frame_t *neo_current_frame;  // 1スレッドなら普通のグローバルでもOK
    
