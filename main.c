#include <stdint.h>
#include <stdbool.h>
#include "driverlib/sysctl.h"
#include "inc/hw_memmap.h"
#include "driverlib/uart.h"
#include "xl320.h"
#include "comm.h"

void test_movement(uint8_t *ID, uint16_t initial_position, uint16_t final_position, uint32_t delay);

int main(void) {
	SysCtlClockSet(SYSCTL_SYSDIV_4 | SYSCTL_USE_PLL | SYSCTL_OSC_MAIN | SYSCTL_XTAL_16MHZ);
	UART_begin();
	Enable_begin();
	UARTCharPut(UART0_BASE, 0x0C);
	uint8_t ID[3] = {4, 5, 6};
	uint8_t i;
	for(i = 0; i < 50; i++){
		test_movement(ID, 256, 512, 3000000);
	}
	while(1){
	}

}


void test_movement(uint8_t *ID, uint16_t initial_position, uint16_t final_position, uint32_t delay){
	if(XL_320_Move(ID[0], initial_position)){
		println("success");
	}else{
		println("failed");
	}
	SysCtlDelay(delay);
	if(XL_320_Move(ID[1], initial_position)){
		println("success");
	}else{
		println("failed");
	}
	SysCtlDelay(delay);
	if(XL_320_Move(ID[2], initial_position)){
		println("success");
	}else{
		println("failed");
	}
	SysCtlDelay(delay);

	if(XL_320_Move(ID[0], final_position)){
		println("success");
	}else{
		println("failed");
	}
	SysCtlDelay(delay);
	if(XL_320_Move(ID[1], final_position)){
		println("success");
	}else{
		println("failed");
	}
	SysCtlDelay(delay);
	if(XL_320_Move(ID[2], final_position)){
		println("success");
	}else{
		println("failed");
	}

	SysCtlDelay(delay);
}





