#define MICROPY_HW_BOARD_NAME       "NUCLEO-L452VE"
#define MICROPY_HW_MCU_NAME         "STM32L452VE"

#define MICROPY_PY_SOCKET           (0)
#define MICROPY_PY_NETWORK          (0)

#define MICROPY_HW_ENABLE_RTC       (1)
#define MICROPY_HW_ENABLE_RNG       (1)
#define MICROPY_HW_ENABLE_DAC       (1)
#define MICROPY_HW_ENABLE_SERVO     (0) // SERVO requires TIM5 (not on L452).
#define MICROPY_HW_HAS_SWITCH       (1)

// MSI is used and is 4MHz
#define MICROPY_HW_CLK_PLLM (1)
#define MICROPY_HW_CLK_PLLN (40)
#define MICROPY_HW_CLK_PLLP (RCC_PLLP_DIV7)
#define MICROPY_HW_CLK_PLLQ (RCC_PLLQ_DIV2)
#define MICROPY_HW_CLK_PLLR (RCC_PLLR_DIV2)
#define MICROPY_HW_FLASH_LATENCY FLASH_LATENCY_4

// The board has an external 32kHz crystal
#define MICROPY_HW_RTC_USE_LSE      (1)

// UART config
#define MICROPY_HW_UART1_TX     (pin_B10)
#define MICROPY_HW_UART1_RX     (pin_B11)
#define MICROPY_HW_UART2_TX     (pin_B10)    // VCP TX
#define MICROPY_HW_UART2_RX     (pin_B11)    // VCP RX
#define MICROPY_HW_UART3_TX     (pin_B10)
#define MICROPY_HW_UART3_RX     (pin_B11)
#define MICROPY_HW_UART4_TX     (pin_B10)
#define MICROPY_HW_UART4_RX     (pin_B11)
// USART2 is connected to the ST-LINK USB VCP
#define MICROPY_HW_UART_REPL        PYB_UART_2
#define MICROPY_HW_UART_REPL_BAUD   115200

// I2C buses
#define MICROPY_HW_I2C1_SCL     (pin_D6)    // Arduino D15, pin 3 on CN10
#define MICROPY_HW_I2C1_SDA     (pin_D10)    // Arduino D14, pin 5 on CN10
#define MICROPY_HW_I2C2_SCL     (pin_D6)   // Arduino D6,  pin 25 on CN10
#define MICROPY_HW_I2C2_SDA     (pin_D10)   //              pin 18 on CN10
#define MICROPY_HW_I2C3_SCL     (pin_D6)    //              pin 15 on CN10
#define MICROPY_HW_I2C3_SDA     (pin_D10)    //              pin 27 on CN10
#define MICROPY_HW_I2C4_SCL     (pin_D6)    //              pin 38 on CN7
#define MICROPY_HW_I2C4_SDA     (pin_D10)    //              pin 36 on CN7

// SPI buses
#define MICROPY_HW_SPI1_NSS     (pin_A13)   //              pin 17 on CN7
#define MICROPY_HW_SPI1_SCK     (pin_A14)    // Arduino D13, pin 11 on CN10
#define MICROPY_HW_SPI1_MISO    (pin_A15)    // Arduino D12, pin 13 on CN10
#define MICROPY_HW_SPI1_MOSI    (pin_B3)    // Arduino D11, pin 15 on CN10
#define MICROPY_HW_SPI2_NSS     (pin_A13)   //              pin 16 on CN10
#define MICROPY_HW_SPI2_SCK     (pin_A14)   //              pin 30 on CN10
#define MICROPY_HW_SPI2_MISO    (pin_A15)   //              pin 28 on CN10
#define MICROPY_HW_SPI2_MOSI    (pin_B3)   //              pin 26 on CN10
#define MICROPY_HW_SPI3_NSS     (pin_A13)    //              pin 32 on CN7
#define MICROPY_HW_SPI3_SCK     (pin_A14)   //              pin 1 on CN7
#define MICROPY_HW_SPI3_MISO    (pin_A15)   //              pin 2 on CN7
#define MICROPY_HW_SPI3_MOSI    (pin_B3)   //              pin 3 on CN7

// CAN buses
#define MICROPY_HW_CAN1_TX (pin_A12)
#define MICROPY_HW_CAN1_RX (pin_A11)

// USER B1 has a pull-up and is active low
#define MICROPY_HW_USRSW_PIN        (pin_L5)
#define MICROPY_HW_USRSW_PULL       (0)
#define MICROPY_HW_USRSW_EXTI_MODE  (GPIO_MODE_IT_FALLING)
#define MICROPY_HW_USRSW_PRESSED    (0)

// NUCLEO-64 has two user LED
#define MICROPY_HW_LED1             (pin_D10) // one led
#define MICROPY_HW_LED_ON(pin)      (mp_hal_pin_high(pin))
#define MICROPY_HW_LED_OFF(pin)     (mp_hal_pin_low(pin))

// NUCLEO-64 has two user LED
#define MICROPY_HW_LED2             (pin_D6) // second led
#define MICROPY_HW_LED2_ON(pin)      (mp_hal_pin_high(pin))
#define MICROPY_HW_LED2_OFF(pin)     (mp_hal_pin_low(pin))
