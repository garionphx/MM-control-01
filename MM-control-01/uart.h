//uart.h
#ifndef _UART_H
#define _UART_H

#include <inttypes.h>
#include <stdio.h>


extern FILE _uart0io;
#define uart0io (&_uart0io)

extern FILE _uart1io;
#define uart1io (&_uart1io)


extern void uart0_init(void);

extern void uart1_init(void);

#if defined(__cplusplus)
extern "C" {
#endif //defined(__cplusplus)

void usbOut(char const * const outstr);

#if defined(__cplusplus)
}
#endif //defined(__cplusplus)


#endif //_UART_H
