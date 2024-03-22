//! \file
//! \brief USART interface

#ifndef _USRAT_H
#define _USRAT_H

#define RX_BUFFER_SIZE 4					//!< USART RX buffer length

//! \brief Initialize USART, perform fdevopen with uart_putchar.
//! \param baudval (F_CPU/(16*baudrate))-1
//! \sa uart_putchar()
void usart_init(uint16_t baudval);

//! \brief Disable USART completely
void usart_stop();

//! \brief putchar() for USART.
//! \param data character to print.
int uart_putchar(char data, FILE *stream);

//! \brief getchar() for USART. Wait for data if not available.
//! \return value read.
//! \sa uart_available()
int uart_getchar();

//! \brief Check data availability in USART buffer.
//! \return 1 if buffer is not empty.
uint8_t uart_available();

//! \brief Nonblocking, nonchecking getchar for USART. Use with care.
uint8_t uart_getc();

//! \brief a stub to use when usart is disabled
static int uart_non(char data, FILE *stream);

#endif

// $Id$
