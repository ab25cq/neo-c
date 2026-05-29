// === trap.c: External interrupt handling (UART RX) ===
#include <stdint.h>

#define UART_IRQ 10
extern void uart_rx_handler();
extern int plic_claim(void);
extern void plic_complete(int irq);

extern void trapvec();  // Interrupt vector function defined in trap.S

void trap_init() {
    uintptr_t trapvec_addr = (uintptr_t)&trapvec;
    
    // Set mtvec to the address of trapvec (direct mode)
    asm volatile("csrw stvec, %0" :: "r"(trapvec_addr));
}

void external_interrupt_handler() {
    int irq = plic_claim();
    if (irq == UART_IRQ) {
        uart_rx_handler();
    }
    if (irq) {
        plic_complete(irq);
    }
}
