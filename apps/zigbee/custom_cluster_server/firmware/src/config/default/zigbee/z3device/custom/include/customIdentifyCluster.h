/*******************************************************************************
 Custom Identify cluster Header File

  Company:
    Microchip Technology Inc.

  File Name:
    customIdentifyCluster.h

  Summary:
    This file contains the Custom Identify cluster interface.

  Description:
    This file contains the Custom Identify cluster interface.
 *******************************************************************************/

// DOM-IGNORE-BEGIN
/*******************************************************************************
* Copyright (C) 2018 Microchip Technology Inc. and its subsidiaries.
*
* Subject to your compliance with these terms, you may use Microchip software
* and any derivatives exclusively with Microchip products. It is your
* responsibility to comply with third party license terms applicable to your
* use of third party software (including open source software) that may
* accompany Microchip software.
*
* THIS SOFTWARE IS SUPPLIED BY MICROCHIP "AS IS". NO WARRANTIES, WHETHER
* EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS SOFTWARE, INCLUDING ANY IMPLIED
* WARRANTIES OF NON-INFRINGEMENT, MERCHANTABILITY, AND FITNESS FOR A
* PARTICULAR PURPOSE.
*
* IN NO EVENT WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE,
* INCIDENTAL OR CONSEQUENTIAL LOSS, DAMAGE, COST OR EXPENSE OF ANY KIND
* WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF MICROCHIP HAS
* BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE FORESEEABLE. TO THE
* FULLEST EXTENT ALLOWED BY LAW, MICROCHIP'S TOTAL LIABILITY ON ALL CLAIMS IN
* ANY WAY RELATED TO THIS SOFTWARE WILL NOT EXCEED THE AMOUNT OF FEES, IF ANY,
* THAT YOU HAVE PAID DIRECTLY TO MICROCHIP FOR THIS SOFTWARE.
*******************************************************************************/
// DOM-IGNORE-END

#ifndef _CUSTOMIDENTIFYCLUSTER_H
#define _CUSTOMIDENTIFYCLUSTER_H

/******************************************************************************
                    Defines
******************************************************************************/
#define IDENTIFY_NON_COLOR_EFFECT false
#define IDENTIFY_COLOR_EFFECT     true
/******************************************************************************
                    Includes section
******************************************************************************/
#include <zcl/include/zclZllIdentifyCluster.h>

/******************************************************************************
                    Externals
******************************************************************************/
extern ZCL_IdentifyClusterServerAttributes_t customIdentifyClusterServerAttributes;
extern ZCL_IdentifyClusterClientAttributes_t customIdentifyClusterClientAttributes;
extern PROGMEM_DECLARE(ZCL_IdentifyClusterCommands_t   customIdentifyCommands);

/******************************************************************************
                    Prototypes section
******************************************************************************/
/******************************************************************************
\brief initialization of  identify cluster
******************************************************************************/
void customIdentifyClusterInit(void);

/**************************************************************************//**
\brief Checks if identification process is in progress

\returns true if it is, false otherwise
******************************************************************************/
bool customIdentifyIsIdentifying(void);

/**************************************************************************//**
\brief Makes device to start identify itself

\param[in] time - identifying time in seconds
******************************************************************************/
void customIdetifyStartIdentifyingCb(uint16_t time, void (*cb)(void));

/**************************************************************************//**
\brief Stops identifying on endpoints
******************************************************************************/
void customIdentifyStop(void);

/**************************************************************************//**
\brief Shows identification effect in way specified.

\param[in] identifyTime - identifying period in seconds.
\param[in] colorEffect - flag to set for color effects.
\param[in] enhancedHue - enhanced hue to move for color effects.
******************************************************************************/
void customIdentifyStart(uint16_t identifyTime, bool colorEffect, uint16_t enhancedHue);

#endif // _CUSTOMIDENTIFYCLUSTER_H

// eof customIdentifyCluster.h

