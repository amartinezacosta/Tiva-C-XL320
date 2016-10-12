#ifndef COMM_H_
#define COMM_H_

#define ENABLE_READ		0
#define ENABLE_WRITE	GPIO_PIN_4

void UART_begin(void);
void Enable_begin(void);
void Enable(uint32_t enable);
void println(const uint8_t *data);

#endif /* COMM_H_ */
