#ifndef __GPIO_WC1__
#define __GPIO_WC1__

#define AP_PD_GPIO_COUNT ARRAY_SIZE(sleep_gpio_table_pd)
#define AP_INIT_GPIO_COUNT ARRAY_SIZE(init_gpio_table)
#define INTERRUPT_SLEEP_GPIO_COUNT ARRAY_SIZE(sleep_gpio_table_alive)
#define INTERRUPT_INIT_GPIO_COUNT ARRAY_SIZE(init_gpio_table_alive)

#define OVERWRITE_INIT_GPIO_COUNT ARRAY_SIZE(overwrite_init_gpio_table)
#define OVERWRITE_INIT_ALIVE_COUNT ARRAY_SIZE(overwrite_init_alive_table)
#define OVERWRITE_SLEEP_GPIO_COUNT ARRAY_SIZE(overwrite_sleep_gpio_table)
#define OVERWRITE_SLEEP_ALIVE_COUNT ARRAY_SIZE(overwrite_sleep_alive_table)

enum OVERWRITE_HW_VER {
	HW_REV_0x0 = 0x0,
	HW_REV_0x1 = 0x1,
	HW_REV_0x2 = 0x2,
	HW_REV_0x3 = 0x3,
	HW_REV_0x4 = 0x4,
	HW_REV_0x5 = 0x5,
	HW_REV_0x6 = 0x6,
	HW_REV_0x7 = 0x7,
	HW_REV_11 = 0x8,
	HW_REV_12 = 0x9,
	HW_REV_13 = 0xa,
	HW_REV_14 = 0xb, //1.5 same as 1.4
	HW_REV_16 = 0xc,
	/* Add to here*/
};

unsigned int overwrite_init_gpio_table[][4] = {
	/* ex : {HW_REV_0x4, EXYNOS3_GPA1(0), S3C_GPIO_INPUT, S3C_GPIO_PULL_DOWN}, */
	{ HW_REV_0x6, EXYNOS3_GPA1(4), S3C_GPIO_INPUT, S3C_GPIO_PULL_DOWN },				/* WPC_I2C_SDA -> NC */
	{ HW_REV_0x6, EXYNOS3_GPA1(5), S3C_GPIO_INPUT, S3C_GPIO_PULL_DOWN },				/* WPC_I2C_SCL -> NC */

	{ HW_REV_0x6, EXYNOS3_GPB(1), S3C_GPIO_INPUT, S3C_GPIO_PULL_DOWN },                   		/* NC */

	{ HW_REV_0x6, EXYNOS3_GPE0(5), S3C_GPIO_INPUT, S3C_GPIO_PULL_NONE }, 				/* OFM_STBY -> WPC_I2C_SDA */
	{ HW_REV_0x6, EXYNOS3_GPE0(6), S3C_GPIO_INPUT, S3C_GPIO_PULL_NONE },				/* OFM_PWRDOWN -> WPC_I2C_SCL */

	{ HW_REV_0x7, EXYNOS3_GPE1(6), S3C_GPIO_INPUT, S3C_GPIO_PULL_DOWN },                             /* NC */

	{ HW_REV_13, EXYNOS3_GPD0(2), S3C_GPIO_INPUT, S3C_GPIO_PULL_DOWN },                             /* NC */
	{ HW_REV_13, EXYNOS3_GPD0(3), S3C_GPIO_INPUT, S3C_GPIO_PULL_DOWN },                             /* NC */
};

unsigned int overwrite_init_alive_table[][4] = {
	/* ex : {HW_REV_0x4, EXYNOS3_GPX1(6), S3C_GPIO_SFN(0xf), S3C_GPIO_PULL_DOWN}, */
	{ HW_REV_0x6, EXYNOS3_GPX0(1), S3C_GPIO_SFN(0xf), S3C_GPIO_PULL_NONE },		/* HALL_A */
	{ HW_REV_0x6, EXYNOS3_GPX1(0), S3C_GPIO_SFN(0xf), S3C_GPIO_PULL_NONE },		/* HALL_B */
	{ HW_REV_0x6, EXYNOS3_GPX1(7), S3C_GPIO_SFN(0xf), S3C_GPIO_PULL_NONE },		/* HALL_C */

	{ HW_REV_0x6, EXYNOS3_GPX2(1), S3C_GPIO_INPUT, S3C_GPIO_PULL_DOWN },				/* NC */
	{ HW_REV_0x6, EXYNOS3_GPX2(2), S3C_GPIO_INPUT, S3C_GPIO_PULL_DOWN },                           	/* NC */
	{ HW_REV_0x6, EXYNOS3_GPX2(3), S3C_GPIO_INPUT, S3C_GPIO_PULL_DOWN },                           	/* NC */
	{ HW_REV_13, EXYNOS3_GPX2(2), S3C_GPIO_INPUT, S3C_GPIO_PULL_NONE },				/* NC -> MUIC_I2C_SDA */
	{ HW_REV_13, EXYNOS3_GPX2(3), S3C_GPIO_INPUT, S3C_GPIO_PULL_NONE },				/* NC -> MUIC_I2C_SCL */
	{ HW_REV_16, EXYNOS3_GPX3(7), S3C_GPIO_SFN(0xf), S3C_GPIO_PULL_NONE },				/* WPC_INT */
};

unsigned int overwrite_sleep_gpio_table[][4] = {
	/* ex :{HW_REV_0x4, EXYNOS3_GPA0(0), S5P_GPIO_PD_INPUT, S5P_GPIO_PD_UPDOWN_DISABLE}, */
	{ HW_REV_0x6, EXYNOS3_GPA1(2), S5P_GPIO_PD_INPUT, S5P_GPIO_PD_DOWN_ENABLE },                     /* NC */
	{ HW_REV_0x6, EXYNOS3_GPA1(3), S5P_GPIO_PD_INPUT, S5P_GPIO_PD_DOWN_ENABLE },                     /* NC */
	{ HW_REV_0x6, EXYNOS3_GPA1(4), S5P_GPIO_PD_INPUT, S5P_GPIO_PD_DOWN_ENABLE },			/* WPC_I2C_SDA -> NC */
	{ HW_REV_0x6, EXYNOS3_GPA1(5), S5P_GPIO_PD_INPUT, S5P_GPIO_PD_DOWN_ENABLE },			/* WPC_I2C_SCL -> NC */

	{ HW_REV_0x6, EXYNOS3_GPB(1), S5P_GPIO_PD_INPUT, S5P_GPIO_PD_DOWN_ENABLE },                     /* NC */

	{ HW_REV_0x6, EXYNOS3_GPE0(5), S5P_GPIO_PD_INPUT, S5P_GPIO_PD_DOWN_ENABLE },			/* OFM_STBY -> WPC_I2C_SDA */
	{ HW_REV_0x6, EXYNOS3_GPE0(6), S5P_GPIO_PD_INPUT, S5P_GPIO_PD_DOWN_ENABLE },			/* OFM_PWRDOWN -> WPC_I2C_SCL */
	{ HW_REV_0x6, EXYNOS3_GPX2(4), S5P_GPIO_PD_INPUT, S5P_GPIO_PD_DOWN_ENABLE },			/* NC -> SHUB_SPI_SSN */

	{ HW_REV_0x7, EXYNOS3_GPE1(6), S5P_GPIO_PD_INPUT, S5P_GPIO_PD_DOWN_ENABLE },                    /* NC */

	{ HW_REV_13, EXYNOS3_GPD0(2), S5P_GPIO_PD_INPUT, S5P_GPIO_PD_DOWN_ENABLE },                     /* NC */
	{ HW_REV_13, EXYNOS3_GPD0(3), S5P_GPIO_PD_INPUT, S5P_GPIO_PD_DOWN_ENABLE },                     /* NC */
};

unsigned int overwrite_sleep_alive_table[][4] = {
	/* ex : {HW_REV_0x4, EXYNOS3_GPX3(0), S3C_GPIO_INPUT, S3C_GPIO_PULL_DOWN}, */
	{ HW_REV_0x6, EXYNOS3_GPX2(1), S3C_GPIO_INPUT, S3C_GPIO_PULL_DOWN },				/* NC */
	{ HW_REV_0x6, EXYNOS3_GPX2(2), S3C_GPIO_INPUT, S3C_GPIO_PULL_DOWN },                            /* NC */
	{ HW_REV_0x6, EXYNOS3_GPX2(3), S3C_GPIO_INPUT, S3C_GPIO_PULL_DOWN },                            /* NC */
	{ HW_REV_13, EXYNOS3_GPX2(2), S3C_GPIO_INPUT, S3C_GPIO_PULL_NONE },				/* NC -> MUIC_I2C_SDA */
	{ HW_REV_13, EXYNOS3_GPX2(3), S3C_GPIO_INPUT, S3C_GPIO_PULL_NONE },				/* NC -> MUIC_I2C_SCL */
	{ HW_REV_16, EXYNOS3_GPX3(7), S3C_GPIO_SFN(0xf), S3C_GPIO_PULL_NONE },				/* WPC_INT */
};


unsigned int init_gpio_table[][3] =
{
	{ EXYNOS3_GPA1(0), S3C_GPIO_INPUT, S3C_GPIO_PULL_DOWN },                                /* NC */
	{ EXYNOS3_GPA1(1), S3C_GPIO_INPUT, S3C_GPIO_PULL_DOWN },                                /* NC */

	{ EXYNOS3_GPA1(4), S3C_GPIO_INPUT, S3C_GPIO_PULL_NONE},					/* WPC_I2C_SDA */
	{ EXYNOS3_GPA1(5), S3C_GPIO_INPUT, S3C_GPIO_PULL_NONE },				/* WPC_I2C_SCL*/

	{ EXYNOS3_GPC0(0), S3C_GPIO_OUTPUT, S3C_GPIO_PULL_DOWN },	 		/* NFC_SPI_CLK */
	{ EXYNOS3_GPC0(2), S3C_GPIO_OUTPUT, S3C_GPIO_PULL_DOWN },			/* NFC_SPI_SSN */
	{ EXYNOS3_GPC0(3), S3C_GPIO_INPUT, S3C_GPIO_PULL_DOWN },			/* NFC_SPI_MISO */
	{ EXYNOS3_GPC0(4), S3C_GPIO_OUTPUT, S3C_GPIO_PULL_DOWN },			/* NFC_SPI_MOSI */

	{ EXYNOS3_GPC1(1), S3C_GPIO_INPUT, S3C_GPIO_PULL_DOWN },				/* NC */

	{ EXYNOS3_GPD0(0), S3C_GPIO_SFN(0x2), S3C_GPIO_PULL_DOWN },				/* MOTOR_PWM */

	{ EXYNOS3_GPD0(2), S3C_GPIO_SFN(0x2), S3C_GPIO_PULL_NONE},					/* MUIC_I2C_SDA */
	{ EXYNOS3_GPD0(3), S3C_GPIO_SFN(0x2), S3C_GPIO_PULL_NONE },				/* MUIC_I2C_SCL*/

	{ EXYNOS3_GPD1(0), S3C_GPIO_SFN(0x2), S3C_GPIO_PULL_NONE },				/* PMIC_I2C_SDA */
	{ EXYNOS3_GPD1(1), S3C_GPIO_SFN(0x2), S3C_GPIO_PULL_NONE },				/* PMIC_I2C_SCL */
	{ EXYNOS3_GPD1(2), S3C_GPIO_SFN(0x2), S3C_GPIO_PULL_NONE },				/* NFC_I2C_SDA */
	{ EXYNOS3_GPD1(3), S3C_GPIO_SFN(0x2), S3C_GPIO_PULL_NONE },				/* NFC_I2C_SCL */

	{ EXYNOS3_GPE0(2), S3C_GPIO_INPUT, S3C_GPIO_PULL_DOWN },				/* OLED_ID */
	{ EXYNOS3_GPE0(4), S3C_GPIO_OUTPUT, S3C_GPIO_PULL_DOWN },				/* WLAN_EN */

	{ EXYNOS3_GPE1(1), S3C_GPIO_OUTPUT, S3C_GPIO_PULL_NONE},                                 /* AP_WRSTB_IN */
	{ EXYNOS3_GPE1(2), S3C_GPIO_INPUT, S3C_GPIO_PULL_NONE},					/* FUEL_I2C_SDA */
	{ EXYNOS3_GPE1(3), S3C_GPIO_INPUT, S3C_GPIO_PULL_NONE },				/* FUEL_I2C_SCL*/
	{ EXYNOS3_GPE1(4), S3C_GPIO_OUTPUT, S3C_GPIO_PULL_DOWN },				/* MOTOR_EN */
	#if 0 /* it's occured to kernel panic */
	{ EXYNOS3_GPK0(0), S3C_GPIO_INPUT, S3C_GPIO_PULL_DOWN },				/* TP*/
	#endif

	{ EXYNOS3_GPK1(0), S3C_GPIO_OUTPUT, S3C_GPIO_PULL_DOWN },   			/* WLAN_SDIO_CLK */
	{ EXYNOS3_GPK1(1), S3C_GPIO_INPUT, S3C_GPIO_PULL_NONE },     			/* WLAN_SDIO_CMD */
	{ EXYNOS3_GPK1(2), S3C_GPIO_INPUT, S3C_GPIO_PULL_DOWN },				/* NC */

	{ EXYNOS3_GPK2(0), S3C_GPIO_INPUT, S3C_GPIO_PULL_DOWN },				/* NC */
	{ EXYNOS3_GPK2(1), S3C_GPIO_INPUT, S3C_GPIO_PULL_DOWN },				/* NC */
	{ EXYNOS3_GPK2(2), S3C_GPIO_INPUT, S3C_GPIO_PULL_DOWN },				/* NC */
	{ EXYNOS3_GPK2(3), S3C_GPIO_INPUT, S3C_GPIO_PULL_DOWN },				/* NC */
	{ EXYNOS3_GPK2(4), S3C_GPIO_INPUT, S3C_GPIO_PULL_DOWN },				/* NC */
	{ EXYNOS3_GPK2(5), S3C_GPIO_INPUT, S3C_GPIO_PULL_DOWN },				/* NC */
	{ EXYNOS3_GPK2(6), S3C_GPIO_INPUT, S3C_GPIO_PULL_DOWN },				/* NC */
};

unsigned int init_gpio_table_alive[][3]=
{
	{EXYNOS3_GPX0(2), S3C_GPIO_SFN(0xf), S3C_GPIO_PULL_UP},
	{EXYNOS3_GPX0(3), S3C_GPIO_INPUT, S3C_GPIO_PULL_DOWN},					/* UART_BOOT_ON */
	{EXYNOS3_GPX0(7), S3C_GPIO_SFN(0xf), S3C_GPIO_PULL_NONE},                                  /* AP_PMIC_IRQ */

	{EXYNOS3_GPX1(0), S3C_GPIO_SFN(0xf), S3C_GPIO_PULL_DOWN},				/* ERR_FG */
	{EXYNOS3_GPX1(4), S3C_GPIO_SFN(0xf), S3C_GPIO_PULL_UP},					/* CODEC_IRQ */
	{EXYNOS3_GPX1(5), S3C_GPIO_SFN(0xf), S3C_GPIO_PULL_NONE},				/* CHG_INTB */
	{EXYNOS3_GPX1(6), S3C_GPIO_SFN(0xf), S3C_GPIO_PULL_DOWN},

	{EXYNOS3_GPX2(0), S3C_GPIO_INPUT, S3C_GPIO_PULL_DOWN},					/* FUNC_SW */

	{EXYNOS3_GPX3(2), S3C_GPIO_INPUT, S3C_GPIO_PULL_DOWN},					/* NC */
	{EXYNOS3_GPX3(4), S3C_GPIO_INPUT, S3C_GPIO_PULL_DOWN},					/* NC */
	{EXYNOS3_GPX3(7), S3C_GPIO_INPUT, S3C_GPIO_PULL_NONE},					/* WPC_INT */
};

unsigned int sleep_gpio_table_alive[][3] =
{
	{EXYNOS3_GPX0(2), S3C_GPIO_SFN(0xf), S3C_GPIO_PULL_UP},
	{EXYNOS3_GPX0(3), S3C_GPIO_INPUT, S3C_GPIO_PULL_DOWN},					/* UART_BOOT_ON */
	{EXYNOS3_GPX0(7), S3C_GPIO_SFN(0xf), S3C_GPIO_PULL_NONE},                                  /* AP_PMIC_IRQ */

	{EXYNOS3_GPX1(4), S3C_GPIO_SFN(0xf), S3C_GPIO_PULL_UP},					/* CODEC_IRQ */
	{EXYNOS3_GPX1(5), S3C_GPIO_SFN(0xf), S3C_GPIO_PULL_NONE},				/* CHG_INTB */
	{EXYNOS3_GPX1(6), S3C_GPIO_SFN(0xf), S3C_GPIO_PULL_DOWN},					/* NFC_IRQ */

	{EXYNOS3_GPX2(0), S3C_GPIO_INPUT, S3C_GPIO_PULL_DOWN},					/* FUNC_SW */
	{EXYNOS3_GPX2(1), S3C_GPIO_SFN(0xf), S3C_GPIO_PULL_DOWN},				/* HALL_INT_1 */
	{EXYNOS3_GPX2(2), S3C_GPIO_SFN(0xf), S3C_GPIO_PULL_DOWN},				/* HALL_INT_2 */
	{EXYNOS3_GPX2(3), S3C_GPIO_SFN(0xf), S3C_GPIO_PULL_DOWN},					/* NC */
	{EXYNOS3_GPX2(5), S3C_GPIO_INPUT, S3C_GPIO_PULL_DOWN},                                  /* NC */

	{EXYNOS3_GPX3(0), S3C_GPIO_INPUT, S3C_GPIO_PULL_DOWN},					/* NC */
	{EXYNOS3_GPX3(2), S3C_GPIO_INPUT, S3C_GPIO_PULL_DOWN},					/* NC */
	{EXYNOS3_GPX3(4), S3C_GPIO_INPUT, S3C_GPIO_PULL_DOWN},					/* NC */
	{EXYNOS3_GPX3(7), S3C_GPIO_INPUT, S3C_GPIO_PULL_NONE},					/* WPC_INT */
};

unsigned int sleep_gpio_table_pd[][3] =
{
	{EXYNOS3_GPA0(0), S5P_GPIO_PD_INPUT, S5P_GPIO_PD_UPDOWN_DISABLE},	 		/* BT_UART_RXD */
	{EXYNOS3_GPA0(1), S5P_GPIO_PD_OUTPUT1, S5P_GPIO_PD_UPDOWN_DISABLE},		 	/* BT_UART_TXD */
	{EXYNOS3_GPA0(2), S5P_GPIO_PD_INPUT, S5P_GPIO_PD_UPDOWN_DISABLE},	 		/* BT_UART_CTS */
	{EXYNOS3_GPA0(3), S5P_GPIO_PD_OUTPUT1, S5P_GPIO_PD_UPDOWN_DISABLE},	 		/* BT_UART_RTS */
	{EXYNOS3_GPA0(4), S5P_GPIO_PD_INPUT, S5P_GPIO_PD_DOWN_ENABLE},	 			/* AP_RXD */
	{EXYNOS3_GPA0(5), S5P_GPIO_PD_INPUT, S5P_GPIO_PD_DOWN_ENABLE},	 			/* AP_TXD */
	{EXYNOS3_GPA0(6), S5P_GPIO_PD_INPUT, S5P_GPIO_PD_UPDOWN_DISABLE},	 		/* TSP_SDA */
	{EXYNOS3_GPA0(7), S5P_GPIO_PD_INPUT, S5P_GPIO_PD_UPDOWN_DISABLE},	 		/* TSP_SCL */

	{ EXYNOS3_GPA1(0), S5P_GPIO_PD_INPUT, S5P_GPIO_PD_DOWN_ENABLE },			/* NC */
	{ EXYNOS3_GPA1(1), S5P_GPIO_PD_INPUT, S5P_GPIO_PD_DOWN_ENABLE },			/* NC */
	{ EXYNOS3_GPA1(2), S5P_GPIO_PD_INPUT, S5P_GPIO_PD_UPDOWN_DISABLE },			/*OFM_I2C_SDA*/
	{ EXYNOS3_GPA1(3), S5P_GPIO_PD_INPUT, S5P_GPIO_PD_UPDOWN_DISABLE },			/*OFM_I2C_SCL*/
	{ EXYNOS3_GPA1(4), S5P_GPIO_PD_INPUT, S5P_GPIO_PD_UPDOWN_DISABLE },			/* WPC_I2C_SDA */
	{ EXYNOS3_GPA1(5), S5P_GPIO_PD_INPUT, S5P_GPIO_PD_UPDOWN_DISABLE },			/* WPC_I2C_SCL */

	{ EXYNOS3_GPB(0), S5P_GPIO_PD_INPUT, S5P_GPIO_PD_DOWN_ENABLE },			/* SHUB_SPI_SCK */
	{ EXYNOS3_GPB(1), S5P_GPIO_PD_INPUT, S5P_GPIO_PD_DOWN_ENABLE },			/* SHUB_SPI_SSN */
	{ EXYNOS3_GPB(2), S5P_GPIO_PD_INPUT, S5P_GPIO_PD_DOWN_ENABLE },			/* SHUB_SPI_MISO */
	{ EXYNOS3_GPB(3), S5P_GPIO_PD_INPUT, S5P_GPIO_PD_DOWN_ENABLE },			/* SHUB_SPI_MOSI */
	{ EXYNOS3_GPB(4), S5P_GPIO_PD_INPUT, S5P_GPIO_PD_DOWN_ENABLE },				/* CODEC_SPI_SCK */
	{ EXYNOS3_GPB(5), S5P_GPIO_PD_INPUT, S5P_GPIO_PD_DOWN_ENABLE },				/* CODEC_SPI_SS_N */
	{ EXYNOS3_GPX2(5), S5P_GPIO_PD_INPUT, S5P_GPIO_PD_DOWN_ENABLE },			/* CODEC_SPI_SS_N */
	{ EXYNOS3_GPB(6), S5P_GPIO_PD_INPUT, S5P_GPIO_PD_DOWN_ENABLE },				/* CODEC_SPI_MISO */
	{ EXYNOS3_GPB(7), S5P_GPIO_PD_INPUT, S5P_GPIO_PD_DOWN_ENABLE },				/* CODEC_SPI_MOSI */

	{ EXYNOS3_GPC0(0), S5P_GPIO_PD_INPUT, S5P_GPIO_PD_DOWN_ENABLE },	 		/* NFC_SPI_CLK */
	{ EXYNOS3_GPC0(1), S5P_GPIO_PD_INPUT, S5P_GPIO_PD_DOWN_ENABLE },			/* NC */
	{ EXYNOS3_GPC0(2), S5P_GPIO_PD_INPUT, S5P_GPIO_PD_DOWN_ENABLE },			/* NFC_SPI_SSN */
	{ EXYNOS3_GPC0(3), S5P_GPIO_PD_INPUT, S5P_GPIO_PD_DOWN_ENABLE },			/* NFC_SPI_MISO */
	{ EXYNOS3_GPC0(4), S5P_GPIO_PD_INPUT, S5P_GPIO_PD_DOWN_ENABLE },			/* NFC_SPI_MOSI */

	{ EXYNOS3_GPC1(0), S5P_GPIO_PD_INPUT, S5P_GPIO_PD_DOWN_ENABLE },			/* MM_I2S_CLK */
	{ EXYNOS3_GPC1(1), S5P_GPIO_PD_INPUT, S5P_GPIO_PD_DOWN_ENABLE },			/* NC */
	{ EXYNOS3_GPC1(2), S5P_GPIO_PD_INPUT, S5P_GPIO_PD_DOWN_ENABLE },			/* MM_I2S_SYNC */
	{ EXYNOS3_GPC1(3), S5P_GPIO_PD_INPUT, S5P_GPIO_PD_DOWN_ENABLE },			/* MM_I2S_DI */
	{ EXYNOS3_GPC1(4), S5P_GPIO_PD_INPUT, S5P_GPIO_PD_DOWN_ENABLE },			/* MM_I2S_DO */

	{ EXYNOS3_GPD0(0), S5P_GPIO_PD_INPUT, S5P_GPIO_PD_DOWN_ENABLE },			/* NC */
	{ EXYNOS3_GPD0(1), S5P_GPIO_PD_INPUT, S5P_GPIO_PD_DOWN_ENABLE },			/* NC */
	{ EXYNOS3_GPD0(2), S5P_GPIO_PD_INPUT, S5P_GPIO_PD_UPDOWN_DISABLE },			/* MUIC_SDA */
	{ EXYNOS3_GPD0(3), S5P_GPIO_PD_INPUT, S5P_GPIO_PD_UPDOWN_DISABLE },     		/* MUIC_SCL */

	{ EXYNOS3_GPD1(0), S5P_GPIO_PD_INPUT, S5P_GPIO_PD_UPDOWN_DISABLE },     		/* PMIC_I2C_SDA */
	{ EXYNOS3_GPD1(1), S5P_GPIO_PD_INPUT, S5P_GPIO_PD_UPDOWN_DISABLE },     		/* PMIC_I2C_SCL */
	{ EXYNOS3_GPD1(2), S5P_GPIO_PD_INPUT, S5P_GPIO_PD_UPDOWN_DISABLE },     		/* NFC_I2C_SCL */
	{ EXYNOS3_GPD1(3), S5P_GPIO_PD_INPUT, S5P_GPIO_PD_UPDOWN_DISABLE },    			/* NFC_I2C_SDA */

	{ EXYNOS3_GPE0(0), S5P_GPIO_PD_PREV_STATE, S5P_GPIO_PD_UPDOWN_DISABLE },        	/* BT_EN */
	{ EXYNOS3_GPE0(1), S5P_GPIO_PD_PREV_STATE, S5P_GPIO_PD_DOWN_ENABLE },        		/* DISP_RST */
	{ EXYNOS3_GPE0(2), S5P_GPIO_PD_INPUT, S5P_GPIO_PD_DOWN_ENABLE },       			/* OLED_ID */
	{ EXYNOS3_GPE0(3), S5P_GPIO_PD_INPUT, S5P_GPIO_PD_DOWN_ENABLE },       			/* CODEC_RESET */
	{ EXYNOS3_GPE0(4), S5P_GPIO_PD_PREV_STATE, S5P_GPIO_PD_UPDOWN_DISABLE },      		/* WLAN_EN */
	{ EXYNOS3_GPE0(5), S5P_GPIO_PD_INPUT, S5P_GPIO_PD_DOWN_ENABLE },      		/* OFM_STBY*/
	//GPE0(6)										/* OFM_PWRDOWN */
	{ EXYNOS3_GPE0(7), S5P_GPIO_PD_PREV_STATE, S5P_GPIO_PD_UPDOWN_DISABLE },        		/* NFC_EN */

	{ EXYNOS3_GPE1(0), S5P_GPIO_PD_OUTPUT0, S5P_GPIO_PD_DOWN_ENABLE },       			/* NFC_FIRMWARE */
	{ EXYNOS3_GPE1(1), S5P_GPIO_PD_OUTPUT1, S5P_GPIO_PD_UPDOWN_DISABLE },        	/* WRSTBI */
	{ EXYNOS3_GPE1(2), S5P_GPIO_PD_INPUT, S5P_GPIO_PD_UPDOWN_DISABLE },       			/* FUEL_I2C_SDA */
	{ EXYNOS3_GPE1(3), S5P_GPIO_PD_INPUT, S5P_GPIO_PD_UPDOWN_DISABLE },     			/* FUEL_I2C_SCL */
#if 0
	{ EXYNOS3_GPE1(4), S5P_GPIO_PD_INPUT, S5P_GPIO_PD_DOWN_ENABLE },     			/* NC */
#else
	{ EXYNOS3_GPE1(4), S5P_GPIO_PD_OUTPUT0, S5P_GPIO_PD_DOWN_ENABLE },     			/* MOTOR_EN */
#endif
	{ EXYNOS3_GPE1(5), S5P_GPIO_PD_INPUT, S5P_GPIO_PD_DOWN_ENABLE },        		/* NC */
	{ EXYNOS3_GPE1(6), S5P_GPIO_PD_PREV_STATE, S5P_GPIO_PD_UPDOWN_DISABLE }, 		/* BT_FEM_EN */
	{ EXYNOS3_GPE1(7), S5P_GPIO_PD_INPUT, S5P_GPIO_PD_UPDOWN_DISABLE },     		/* HW_REV0 */

	{ EXYNOS3_GPE2(0), S5P_GPIO_PD_INPUT, S5P_GPIO_PD_UPDOWN_DISABLE },     		/* HW_REV1 */
	{ EXYNOS3_GPE2(1), S5P_GPIO_PD_INPUT, S5P_GPIO_PD_UPDOWN_DISABLE },    			/* HW_REV2 */
	{ EXYNOS3_GPE2(2), S5P_GPIO_PD_INPUT, S5P_GPIO_PD_UPDOWN_DISABLE },     		/* HW_REV3 */

	{ EXYNOS3_GPK0(0), S5P_GPIO_PD_INPUT, S5P_GPIO_PD_DOWN_ENABLE },       			/* TP */
	{ EXYNOS3_GPK0(1), S5P_GPIO_PD_INPUT, S5P_GPIO_PD_UPDOWN_DISABLE },  			/* EMMC_CMD */
	{ EXYNOS3_GPK0(2), S5P_GPIO_PD_OUTPUT0, S5P_GPIO_PD_UPDOWN_DISABLE },        		/* eMMC_EN */
	{ EXYNOS3_GPK0(3), S5P_GPIO_PD_INPUT, S5P_GPIO_PD_UPDOWN_DISABLE }, 			/* EMMC_D0 */
	{ EXYNOS3_GPK0(4), S5P_GPIO_PD_INPUT, S5P_GPIO_PD_UPDOWN_DISABLE },  			/* EMMC_D1 */
	{ EXYNOS3_GPK0(5), S5P_GPIO_PD_INPUT, S5P_GPIO_PD_UPDOWN_DISABLE }, 			/* EMMC_D2 */
	{ EXYNOS3_GPK0(6), S5P_GPIO_PD_INPUT, S5P_GPIO_PD_UPDOWN_DISABLE }, 			/* EMMC_D3 */
	{ EXYNOS3_GPK0(7), S5P_GPIO_PD_INPUT, S5P_GPIO_PD_DOWN_ENABLE }, 			/* 10K PD */

	{ EXYNOS3_GPK1(0), S5P_GPIO_PD_OUTPUT0, S5P_GPIO_PD_DOWN_ENABLE },   			/* WLAN_SDIO_CLK */
	{ EXYNOS3_GPK1(1), S5P_GPIO_PD_INPUT, S5P_GPIO_PD_UPDOWN_DISABLE },     		/* WLAN_SDIO_CMD */
	{ EXYNOS3_GPK1(2), S5P_GPIO_PD_INPUT, S5P_GPIO_PD_DOWN_ENABLE },        		/* NC */
	{ EXYNOS3_GPK1(3), S5P_GPIO_PD_INPUT, S5P_GPIO_PD_UPDOWN_DISABLE },     		/* WLAN_SDIO_D0 */
	{ EXYNOS3_GPK1(4), S5P_GPIO_PD_INPUT, S5P_GPIO_PD_UPDOWN_DISABLE },     		/* WLAN_SDIO_D1 */
	{ EXYNOS3_GPK1(5), S5P_GPIO_PD_INPUT, S5P_GPIO_PD_UPDOWN_DISABLE },     		/* WLAN_SDIO_D2 */
	{ EXYNOS3_GPK1(6), S5P_GPIO_PD_INPUT, S5P_GPIO_PD_UPDOWN_DISABLE },     		/* WLAN_SDIO_D3 */

	{ EXYNOS3_GPK2(0), S5P_GPIO_PD_INPUT, S5P_GPIO_PD_DOWN_ENABLE },       			/* NC */
	{ EXYNOS3_GPK2(1), S5P_GPIO_PD_INPUT, S5P_GPIO_PD_DOWN_ENABLE },        		/* NC */
	{ EXYNOS3_GPK2(2), S5P_GPIO_PD_INPUT, S5P_GPIO_PD_DOWN_ENABLE },       			/* NC */
	{ EXYNOS3_GPK2(3), S5P_GPIO_PD_INPUT, S5P_GPIO_PD_DOWN_ENABLE },       			/* NC */
	{ EXYNOS3_GPK2(4), S5P_GPIO_PD_INPUT, S5P_GPIO_PD_DOWN_ENABLE },        		/* NC */
	{ EXYNOS3_GPK2(5), S5P_GPIO_PD_INPUT, S5P_GPIO_PD_DOWN_ENABLE },        		/* NC */
	{ EXYNOS3_GPK2(6), S5P_GPIO_PD_INPUT, S5P_GPIO_PD_DOWN_ENABLE },        		/* NC */

	{ EXYNOS3_GPL0(0), S5P_GPIO_PD_INPUT, S5P_GPIO_PD_UPDOWN_DISABLE },  			/* EMMC_D4 */
	{ EXYNOS3_GPL0(1), S5P_GPIO_PD_INPUT, S5P_GPIO_PD_UPDOWN_DISABLE },  			/* EMMC_D5 */
	{ EXYNOS3_GPL0(2), S5P_GPIO_PD_INPUT, S5P_GPIO_PD_UPDOWN_DISABLE },  			/* EMMC_D6 */
	{ EXYNOS3_GPL0(3), S5P_GPIO_PD_INPUT, S5P_GPIO_PD_UPDOWN_DISABLE },  			/* EMMC_D7 */

	{ EXYNOS3_GPM0(0), S5P_GPIO_PD_INPUT, S5P_GPIO_PD_DOWN_ENABLE },       			/* NC */
	{ EXYNOS3_GPM0(1), S5P_GPIO_PD_INPUT, S5P_GPIO_PD_DOWN_ENABLE },        		/* NC */
	{ EXYNOS3_GPM0(2), S5P_GPIO_PD_INPUT, S5P_GPIO_PD_DOWN_ENABLE },       			/* NC */
	{ EXYNOS3_GPM0(3), S5P_GPIO_PD_INPUT, S5P_GPIO_PD_DOWN_ENABLE },       			/* NC */
	{ EXYNOS3_GPM0(4), S5P_GPIO_PD_INPUT, S5P_GPIO_PD_DOWN_ENABLE },        		/* NC */
	{ EXYNOS3_GPM0(5), S5P_GPIO_PD_INPUT, S5P_GPIO_PD_DOWN_ENABLE },       			/* NC */
	{ EXYNOS3_GPM0(6), S5P_GPIO_PD_INPUT, S5P_GPIO_PD_DOWN_ENABLE },        		/* NC */
	{ EXYNOS3_GPM0(7), S5P_GPIO_PD_INPUT, S5P_GPIO_PD_DOWN_ENABLE },        		/* NC */

	{ EXYNOS3_GPM1(0), S5P_GPIO_PD_INPUT, S5P_GPIO_PD_DOWN_ENABLE },        		/* NC */
	{ EXYNOS3_GPM1(1), S5P_GPIO_PD_INPUT, S5P_GPIO_PD_DOWN_ENABLE },        		/* NC */
	{ EXYNOS3_GPM1(2), S5P_GPIO_PD_INPUT, S5P_GPIO_PD_DOWN_ENABLE },        		/* NC */
	{ EXYNOS3_GPM1(3), S5P_GPIO_PD_INPUT, S5P_GPIO_PD_DOWN_ENABLE },        		/* NC */
	{ EXYNOS3_GPM1(4), S5P_GPIO_PD_INPUT, S5P_GPIO_PD_DOWN_ENABLE },        		/* NC */
	{ EXYNOS3_GPM1(5), S5P_GPIO_PD_INPUT, S5P_GPIO_PD_DOWN_ENABLE },        		/* NC */
	{ EXYNOS3_GPM1(6), S5P_GPIO_PD_INPUT, S5P_GPIO_PD_DOWN_ENABLE },        		/* NC */

	{ EXYNOS3_GPM2(0), S5P_GPIO_PD_INPUT, S5P_GPIO_PD_DOWN_ENABLE },        		/* NC */
	{ EXYNOS3_GPM2(1), S5P_GPIO_PD_INPUT, S5P_GPIO_PD_DOWN_ENABLE },        		/* NC */
	{ EXYNOS3_GPM2(2), S5P_GPIO_PD_INPUT, S5P_GPIO_PD_DOWN_ENABLE },        		/* NC */
	{ EXYNOS3_GPM2(3), S5P_GPIO_PD_INPUT, S5P_GPIO_PD_DOWN_ENABLE },       			/* NC */
	{ EXYNOS3_GPM2(4), S5P_GPIO_PD_INPUT, S5P_GPIO_PD_DOWN_ENABLE },        		/* NC */

	{ EXYNOS3_GPM3(0), S5P_GPIO_PD_INPUT, S5P_GPIO_PD_DOWN_ENABLE },      			/* NC */
	{ EXYNOS3_GPM3(1), S5P_GPIO_PD_INPUT, S5P_GPIO_PD_DOWN_ENABLE },        		/* NC */
	{ EXYNOS3_GPM3(2), S5P_GPIO_PD_INPUT, S5P_GPIO_PD_DOWN_ENABLE },        		/* NC */
	{ EXYNOS3_GPM3(3), S5P_GPIO_PD_INPUT, S5P_GPIO_PD_DOWN_ENABLE },        		/* NC */
	{ EXYNOS3_GPM3(4), S5P_GPIO_PD_INPUT, S5P_GPIO_PD_DOWN_ENABLE },        		/* NC */
	{ EXYNOS3_GPM3(5), S5P_GPIO_PD_INPUT, S5P_GPIO_PD_DOWN_ENABLE },        		/* NC */
	{ EXYNOS3_GPM3(6), S5P_GPIO_PD_INPUT, S5P_GPIO_PD_DOWN_ENABLE },        		/* NC */
	{ EXYNOS3_GPM3(7), S5P_GPIO_PD_INPUT, S5P_GPIO_PD_DOWN_ENABLE },        		/* NC */

	{ EXYNOS3_GPM4(0), S5P_GPIO_PD_INPUT, S5P_GPIO_PD_DOWN_ENABLE },     			/* NC */
	{ EXYNOS3_GPM4(1), S5P_GPIO_PD_INPUT, S5P_GPIO_PD_DOWN_ENABLE },    			/* NC */
	{ EXYNOS3_GPM4(2), S5P_GPIO_PD_INPUT, S5P_GPIO_PD_DOWN_ENABLE },       			/* NC  */
	{ EXYNOS3_GPM4(3), S5P_GPIO_PD_INPUT, S5P_GPIO_PD_DOWN_ENABLE },       			/* NC */
	{ EXYNOS3_GPM4(4), S5P_GPIO_PD_INPUT, S5P_GPIO_PD_DOWN_ENABLE },      			/* NC */
	{ EXYNOS3_GPM4(5), S5P_GPIO_PD_INPUT, S5P_GPIO_PD_DOWN_ENABLE },        		/* NC */
	{ EXYNOS3_GPM4(6), S5P_GPIO_PD_INPUT, S5P_GPIO_PD_DOWN_ENABLE },       			/* NC */
	{ EXYNOS3_GPM4(7), S5P_GPIO_PD_INPUT, S5P_GPIO_PD_DOWN_ENABLE },       			/* NC */
};


#endif
