/* Pin defines for Barsotion-EA_v2 board */

#ifndef EA_PINDEFS_H
#define EA_PINDEFS_H

#ifdef __cplusplus
extern "C" {
#endif

/* VSPI & FSPI */
#define VSPI_Q_PINNUM			(gpio_num_t)1
#define VSPI_D_PINNUM			(gpio_num_t)2
#define VSPI_CLK_PINNUM			(gpio_num_t)4
#define VSPI_CS_PINNUM			(gpio_num_t)5
#define FSPI_Q_PINNUM			(gpio_num_t)13
#define FSPI_D_PINNUM			(gpio_num_t)11
#define FSPI_CLK_PINNUM			(gpio_num_t)12
#define FSPI_CS_PINNUM			(gpio_num_t)10
#define FSPI_HD_PINNUM			(gpio_num_t)9
#define FSPI_WP_PINNUM			(gpio_num_t)14
/* I2C bus */
#define SDA_PINNUM				(gpio_num_t)17
#define SCL_PINNUM				(gpio_num_t)18
/* UART0 bus */
#define TXD0_PINNUM				(gpio_num_t)43
#define RXD0_PINNUM				(gpio_num_t)44
/* Servo */
#define SERVOEN_PINNUM			(gpio_num_t)37
#define SERVOA_PINNUM			(gpio_num_t)33
#define SERVOB_PINNUM			(gpio_num_t)34
#define SERVOC_PINNUM			(gpio_num_t)35
#define SERVOD_PINNUM			(gpio_num_t)36
/* ADC */
#define VPROBE_ADC_CHANNEL		ADC1_CH6
#define VPROBE_PINNUM			(gpio_num_t)7
/* Other pins */
#define ACTION_PINNUM			(gpio_num_t)39
#define BUZ_PINNUM				(gpio_num_t)21
#define LD_CLK_PINNUM			(gpio_num_t)8
#define LD_D_PINNUM				(gpio_num_t)26 //???
#define OFF_PINNUM				(gpio_num_t)38


/* IMU */
#define IMU_SPI_HOST			SPI3_HOST
#define IMU_MISO_PINNUM			VSPI_Q_PINNUM
#define IMU_MOSI_PINNUM			VSPI_D_PINNUM
#define IMU_SCK_PINNUM			VSPI_CLK_PINNUM
#define IMU_CS_PINNUM			VSPI_CS_PINNUM
#define IMU_INT_PINNUM			(gpio_num_t)6
/* SPI NAND Flash */
#define FLASH_SPI_HOST			SPI2_HOST
#define FLASH_D0_PINNUM			FSPI_D_PINNUM
#define FLASH_D1_PINNUM			FSPI_Q_PINNUM
#define FLASH_D2_PINNUM			FSPI_WP_PINNUM
#define FLASH_D3_PINNUM			FSPI_HD_PINNUM
#define FLASH_SCK_PINNUM		FSPI_SCK_PINNUM
#define FLASH_CS_PINNUM			FSPI_CS_PINNUM

#ifdef __cplusplus
}
#endif

#endif /* EA_PINDEFS_H */
