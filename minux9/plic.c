
// === plic.c ===
#include <stdint.h>

#define UART0 0x10000000L
#define UART_RXDATA (volatile uint32_t*)(UART0 + 0x00)
#define UART_TXDATA (volatile uint32_t*)(UART0 + 0x04)
#define UART_TXFULL 0x80000000
#define UART_IE     (volatile uint32_t*)(UART0 + 0x08)
#define UART_RX_INTR (1 << 0)

#define PLIC_BASE 0x0c000000L
#define PLIC_PRIORITY     ((volatile uint32_t *)(PLIC_BASE + 0x000000))
#define PLIC_PENDING      ((volatile uint32_t *)(PLIC_BASE + 0x001000))
#define PLIC_MENABLE(hart) ((volatile uint32_t *)(PLIC_BASE + 0x002000 + (hart) * 0x100))
#define PLIC_MPRIORITY(hart) ((volatile uint32_t *)(PLIC_BASE + 0x200000 + (hart) * 0x2000))
#define PLIC_MCLAIM(hart) ((volatile uint32_t *)(PLIC_BASE + 0x200004 + (hart) * 0x2000))
#define PLIC_MCOMPLETE(hart) ((volatile uint32_t *)(PLIC_BASE + 0x200004 + (hart) * 0x2000))

#define HART_ID 0  // Typically hartid = 0 for a single CPU

void plic_init() {
    // Set all interrupt priorities to the default
    for (int i = 1; i < 32; i++) {
        PLIC_PRIORITY[i] = 1;
    }

    // Allow only the interrupts we use, such as UART (start with all disabled)
    *PLIC_MENABLE(HART_ID) = 0;

    // Priority threshold (0 lets everything through)
    *PLIC_MPRIORITY(HART_ID) = 0;
}

void plic_enable(int irq) {
    *PLIC_MENABLE(HART_ID) |= (1 << irq);
}

int plic_claim() {
    return *PLIC_MCLAIM(HART_ID);
}

void plic_complete(int irq) {
    *PLIC_MCOMPLETE(HART_ID) = irq;
}


#include <stdint.h>

// Offsets for 16550 UART registers
#define RBR              0    // Receiver Buffer Register (read incoming data)
#define THR              0    // Transmit Holding Register (write outgoing data)
#define LSR              5    // Line Status Register

// LSR bit definitions
#define LSR_RX_READY     0x01 // Receive data ready
#define LSR_THR_EMPTY    0x20 // Transmit register empty

static inline uint8_t uart_read_reg(int offset) {
    return *(volatile uint8_t*)(UART0 + offset);
}
    
void timer_handler();

/// Read one byte from UART (blocking)
char uart_getc(void) {
    // Wait until data arrives
    while ((uart_read_reg(LSR) & LSR_RX_READY) == 0) {
timer_handler();
    }
    return uart_read_reg(RBR);
}

typedef unsigned long size_t;

size_t uart_readn(char *buf, size_t len) 
{
    size_t i = 0;
    while (i < len) {
        buf[i++] = uart_getc();
    }
    return i;
}                            
    
/// Read up to maxlen-1 bytes until a newline ('\n' or '\r') arrives,
/// NUL-terminate buf, and drop the newline itself
size_t uart_readline(char *buf, size_t maxlen) {
    size_t i = 0;
      char c;
    while (i + 1 < maxlen) {
        c = uart_getc();
        // Check for CR/LF
        if (c == '\r' || c == '\n') {
            break;
        }
        buf[i++] = c;
    }
    buf[i] = '\0';
    // If an LF follows CR/LF and you want to drop it automatically, discard another uart_getc() here
    return i;
}
