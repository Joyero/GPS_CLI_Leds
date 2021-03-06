/*******************************************************************************
* Filename: MiscFunctions.c
* Developer(s): Jorge Rios
* Language: ANSI C
* Abstract: 
* ------------------------------------------------------------------------------
* Copyright (c) 2009, Investigacion y Tecnologia S.A.
* Investigacion y Tecnologia S.A.
* Carrera 19  82 - 38
* Bogota.
* Colombia.
*
* http: www.invytec.com
* mail: hardware@invytec.com
*
* All rights reserved.
* ------------------------------------------------------------------------------
* Notes:
*
*******************************************************************************/

/*******************************************************************************
* HEADER FILES
*******************************************************************************/
/* ansi c */

/* propietary */
#include "MiscFunctions.h"

/* operation system */



/*******************************************************************************
* LOCAL CONSTANT DECLARATION
*******************************************************************************/

/*******************************************************************************
* LOCAL MACRO DECLARATION
*******************************************************************************/



/*******************************************************************************
* LOCAL NEW DATA TYPES
*******************************************************************************/

/**
@name  	    data type Name 
@brief	    Description
*/

           
/*******************************************************************************
* LOCAL DATA DECLARATION
*******************************************************************************/


/*******************************************************************************
* Global Data Declaration
*******************************************************************************/


/*******************************************************************************
* GLOBAL FUNCTION DECLARATION
*******************************************************************************/


/*******************************************************************************
* LOCAL FUNCTIONS DECLARATIONS
*******************************************************************************/




/*******************************************************************************
* LOCAL FUNCTIONS DEFINITIONS
*******************************************************************************/


/**********************************************************************************
Function Name: 	MiscFunctions_DecodASCIIDecimalToHexa
Description:	converts any ASCII-Hexa byte to its Hexa code
Condition: 		none
Return value: 	none
***;********************************************************************************/
uint8 MiscFunctions_DecodASCIIDecimalToHexa(uint8 u8TmpHighASCIIData, uint8 u8TmpLowASCIIData)		//DAscii1=>High, DAscii2=>Low part
{
	uint8 u8RetHexaData = 0;
    u8RetHexaData = (u8TmpHighASCIIData - '0')*10 + (u8TmpLowASCIIData - '0');
    return u8RetHexaData;
}         
/**********************************************************************************
End of function MiscFunctions_DecodASCIIDecimalToHexa
***********************************************************************************/


/**********************************************************************************
Name:          	
Description:    
Parameters:     
Returns:        
**********************************************************************************/

/***********************************************************************************
End of function 
***********************************************************************************/



/* [] END OF FILE */

