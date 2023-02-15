/*
 * NRF24L01.c
 *
 *  Created on: Feb 15, 2023
 *      Author: ulysi
 */


#include "stm32f1xx_hal.h"

#define NRF24_CE_PORT	GPIOA			//Enable the device
#define NRF24_CE_PIN	GPIO_PIN_0

#define NRF24_CSN_PORT	GPIOA			//Selecting the slave device
#define NRF24_CSN_PIN	GPIO_PIN_1


void nrf24_WriteReg(uint8_t Reg, uint8_t Data)
{
	uint8_t buf[2];
	buf[0]= Reg|1<<5;

	//Pull the CS Pin to LOW to select the device
	HAL_GPIO_WritePin(NRF24_CSN_PORT, NRF24_CSN_PIN, GPIO_PIN_RESET);
}

