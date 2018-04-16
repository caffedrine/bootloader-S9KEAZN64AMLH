/*
 * UART.h
 *
 *  Created on: Dec 18, 2013
 *      Author: B46911
 */

#ifndef UART_H_
#define UART_H_
/*******************************************************************************
* Includes
********************************************************************************/
#include <stdint.h>
#include "SKEAZN642.h"
/*******************************************************************************
* Constants
********************************************************************************/


/*******************************************************************************
* Macros
********************************************************************************/

                
/*******************************************************************************
* Types
********************************************************************************/
typedef void(*pt2Func)(void);		  /* Pointer to Functions, void argument */
typedef void(*pt2FuncU8)(uint8_t);	  /* Pointer to Functions, UINT8 argument */

/*******************************************************************************
* Variables
********************************************************************************/


/*******************************************************************************
* Global Variables
********************************************************************************/


/*******************************************************************************
* Global Functions
********************************************************************************/

/***********************************************************************************************
*
* @brief    Uart_Init - Initalizes the Uart 1 to run at 9600 bauds assuming bus clock of 20Mhz
* @param    none
* @return   none
*
************************************************************************************************/  
void UART_Init(void);


/***********************************************************************************************
*
* @brief    Uart_SendChar - Send a single byte on Uart1 
* @param    byte to send
* @return   none
*
************************************************************************************************/  
void Uart_SendChar(uint8_t send);

/***********************************************************************************************
*
* @brief    Uart_GetChar - Retreive the received char from the Uart1 buffer (should be called from Interrupt) 
* @param    none
* @return   received byte
*
************************************************************************************************/
uint8_t Uart_GetChar(void);

/***********************************************************************************************
*
* @brief    Uart_SetCallback - Set a callback function to execute when a byte is received on the Uart1
* @param    pointer to function with an UINT8 argument
* @return   none
*
************************************************************************************************/  
void Uart_SetCallback(pt2FuncU8 ptr);


#endif /* UART_H_ */
