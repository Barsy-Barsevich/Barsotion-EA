/* Pin defines for Barsotion-EA_v2 board */

#ifndef EA_PINDEFS_H
#define EA_PINDEFS_H
/* VSPI & FSPI */
#define VSPI_Q_PINNUM           1
#define VSPI_D_PINNUM           2
#define VSPI_CLK_PINNUM         4
#define VSPI_CS_PINNUM          5
#define FSPI_Q_PINNUM           13
#define FSPI_D_PINNUM           11
#define FSPI_CLK_PINNUM         12
#define FSPI_CS_PINNUM          10
#define FSPI_HD_PINNUM          9
#define FSPI_WP_PINNUM          14
/* I2C bus */
#define SDA_PINNUM			    17
#define SCL_PINNUM			    18
/* UART0 bus */
#define TXD0_PINNUM			    43
#define RXD0_PINNUM			    44
/* Servo */
#define SERVOEN_PINNUM          37
#define SERVOA_PINNUM           33
#define SERVOB_PINNUM           34
#define SERVOC_PINNUM           35
#define SERVOD_PINNUM           36
/* Other pins */
#define ACTION_PINNUM		    39
#define BUZ_PINNUM              21
#define VOLTAGE_PINNUM          7
#define LD_CLK_PINNUM           8
#define LD_D_PINNUM             26 //???
#define OFF_PINNUM              38


/* IMU */
#define IMU_SPI_HOST    	    SPI3_HOST
#define IMU_MISO_PINNUM         VSPI_Q_PINNUM
#define IMU_MOSI_PINNUM         VSPI_D_PINNUM
#define IMU_SCK_PINNUM          VSPI_CLK_PINNUM
#define IMU_CS_PINNUM           VSPI_CS_PINNUM
#define IMU_INT_PINNUM          6
/* SPI NAND Flash */
#define FLASH_SPI_HOST    	    SPI2_HOST
#define FLASH_D0_PINNUM         FSPI_D_PINNUM
#define FLASH_D1_PINNUM         FSPI_Q_PINNUM
#define FLASH_D2_PINNUM         FSPI_WP_PINNUM
#define FLASH_D3_PINNUM         FSPI_HD_PINNUM
#define FLASH_SCK_PINNUM        FSPI_SCK_PINNUM
#define FLASH_CS_PINNUM         FSPI_CS_PINNUM

#endif /* EA_PINDEFS_H */
