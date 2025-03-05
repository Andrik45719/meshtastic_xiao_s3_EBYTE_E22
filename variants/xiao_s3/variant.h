
#define LED_PIN 21
#define LED_STATE_ON 1 // State when LED is lit

//#define BUTTON_PIN 0	 // Use the BOOT button as the user button

//#define BATTERY_PIN -1
//#define ADC_CHANNEL ADC1_GPIO1_CHANNEL
//#define BATTERY_SENSE_RESOLUTION_BITS 12

#define HAS_SCREEN 0 // Assume no screen present by default to prevent crash...

#define UART_TX -1
#define UART_RX -1

#define HAS_GPS 0

#define I2C_SDA 5
#define I2C_SCL 6

#define USE_SX1268

#define LORA_SCK 7
#define LORA_MOSI 9
#define LORA_MISO 8
#define LORA_CS 44

#define LORA_RESET 43
#define LORA_BUSY 4
#define LORA_DIO0
#define LORA_DIO1 3
#define LORA_DIO2
#define LORA_DIO3

#define SX126X_CS 	LORA_CS
#define SX126X_DIO1 	LORA_DIO1
#define SX126X_BUSY 	LORA_BUSY
#define SX126X_RESET	LORA_RESET
#define SX126X_RXEN 2
#define SX126X_TXEN 1


#define SX126X_MAX_POWER 22

#define SX126X_DIO3_TCXO_VOLTAGE 1.8
#define TCXO_OPTIONAL // make it so that the firmware can try both TCXO and XTAL

