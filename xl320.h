#ifndef XL320_H_
#define XL320_H_

//XL_320 INSTRUCTIONS
#define PING			0x01
#define READ			0x02
#define WRITE			0x03
#define REG_WRITE		0x04
#define ACTION			0x05
#define FACTORY_RESET	0x06
#define REBOOT			0x08
#define STATUS			0x55
#define SYNC_READ		0x82
#define SYNC_WRITE		0x83
#define BULK_READ		0x92
#define BULK_WRITE		0x93


//XL-320 ADDRESS MAP
#define MODEL_NUMBER_R				0
#define VERSION_FIRMWARE_R			2
#define ID_RW						3
#define BAUD_RATE_RW				4
#define RETURN_DELAY_TIME_RW		5
#define CW_ANGLE_LIMIT_RW			6
#define CCW_ANGLE_LIMIT_RW			8
#define CONTROL_MODE_RW				11
#define LIMIT_TEMPERATURE_RW		12
#define LOWER_LIMIT_VOLTAGE_RW		13
#define UPPER_LIMIT_VOLTAGE_RW		14
#define MAX_TORQUE_RW				15
#define RETURN_LEVEL_RW				17
#define ALARM_SHUTDOWN_RW			18
#define TORQUE_ENABLE_RW			24
#define LED_RW						25
#define D_GAIN_RW					27
#define I_GAIN_RW					28
#define P_GAIN_RW					29
#define GOAL_POSITION_RW			30
#define GOAL_VELOCITY_RW			32
#define GOAL_TORQUE_RW				35
#define PRESENT_POSITION_R			37
#define PRESENT_SPEED_R				39
#define PRESENT_LOAD_R				41
#define PRESENT_VOLTAGE				45
#define PRESENT_TEMPERATURE_R		46
#define REGISTERED_INSTRUCTION_R	47
#define MOVING_R					49
#define HARDWARE_ERROR_STATUS_R		50
#define PUNCH_RW					51


#define NANO_TIME_DELAY 			20000

//R/W COMMANDS
uint8_t XL_320_LED(uint8_t ID, uint16_t value);
uint8_t XL_320_Move(uint8_t ID, uint16_t value);

//R ONLY COMMANDS
uint8_t* XL_320_Model(uint8_t ID);

#endif /* XL320_H_ */
