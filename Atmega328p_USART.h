#ifndef ATMEGA328P_USART_H_
#define ATMEGA328P_USART_H_

#define F_CPU 16000000 // 16MHz
#define BAUD 9600
#define BRC F_CPU/16/BAUD-1

void USART_init();
void USART_transmit_character(unsigned char data);
void USART_transmit_string(char* string);

#endif /* ATMEGA328P_USART_H_ */