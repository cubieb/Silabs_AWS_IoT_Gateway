/*
*********************************************************************************************************
*                                             EXAMPLE CODE
*********************************************************************************************************
* Licensing:
*   The licensor of this EXAMPLE CODE is Silicon Laboratories Inc.
*
*   Silicon Laboratories Inc. grants you a personal, worldwide, royalty-free, fully paid-up license to
*   use, copy, modify and distribute the EXAMPLE CODE software, or portions thereof, in any of your
*   products.
*
*   Your use of this EXAMPLE CODE is at your own risk. This EXAMPLE CODE does not come with any
*   warranties, and the licensor disclaims all implied warranties concerning performance, accuracy,
*   non-infringement, merchantability and fitness for your application.
*
*   The EXAMPLE CODE is provided "AS IS" and does not come with any support.
*
*   You can find user manuals, API references, release notes and more at: https://doc.micrium.com
*
*   You can contact us at: https://www.micrium.com
*********************************************************************************************************
*/

/*
*********************************************************************************************************
*
*                                        CANOPEN CONFIGURATION
*
*                                      CONFIGURATION TEMPLATE FILE
*
* File : canopen_cfg.h
*********************************************************************************************************
*/

/*
*********************************************************************************************************
*********************************************************************************************************
*                                               MODULE
*********************************************************************************************************
*********************************************************************************************************
*/

#ifndef _CANOPEN_CFG_H_
#define _CANOPEN_CFG_H_


/*
*********************************************************************************************************
*********************************************************************************************************
*                                             INCLUDE FILES
*********************************************************************************************************
*********************************************************************************************************
*/

#include  <common/include/lib_def.h>


/*
*********************************************************************************************************
*********************************************************************************************************
*                                      CANOPEN OBJECT DIRECTORY CONFIGURATION
*********************************************************************************************************
*********************************************************************************************************
*/

#define CANOPEN_OBJ_PARAM_EN         DEF_ENABLED
#define CANOPEN_OBJ_STRING_EN        DEF_ENABLED
#define CANOPEN_OBJ_DOMAIN_EN        DEF_ENABLED


/*
*********************************************************************************************************
*********************************************************************************************************
*                                      CANOPEN SDO SERVER CONFIGURATION
*********************************************************************************************************
*********************************************************************************************************
*/

#define CANOPEN_SDO_MAX_SERVER_QTY   2
#define CANOPEN_SDO_DYN_ID_EN        DEF_ENABLED
#define CANOPEN_SDO_SEG_EN           DEF_ENABLED


/*
*********************************************************************************************************
*********************************************************************************************************
*                                      CANOPEN EMERGENCY CONFIGURATION
*********************************************************************************************************
*********************************************************************************************************
*/

#define CANOPEN_EMCY_MAX_ERR_QTY     6
#define CANOPEN_EMCY_REG_CLASS_EN    DEF_DISABLED
#define CANOPEN_EMCY_EMCY_MAN_EN     DEF_DISABLED
#define CANOPEN_EMCY_HIST_EN         DEF_DISABLED
#define CANOPEN_EMCY_HIST_MAN_EN     DEF_DISABLED


/*
*********************************************************************************************************
*********************************************************************************************************
*                                      CANOPEN TIMER MANAGEMENT CONFIGURATION
*********************************************************************************************************
*********************************************************************************************************
*/

#define CANOPEN_TMR_MAX_QTY          5


/*
*********************************************************************************************************
*********************************************************************************************************
*                                      CANOPEN PDO TRANSFER CONFIGURATION
*********************************************************************************************************
*********************************************************************************************************
*/

#define CANOPEN_RPDO_MAX_QTY         4
#define CANOPEN_RPDO_MAX_MAP_QTY     2
#define CANOPEN_RPDO_DYN_COM_EN      DEF_ENABLED
#define CANOPEN_RPDO_DYN_MAP_EN      DEF_ENABLED

#define CANOPEN_TPDO_MAX_QTY         4
#define CANOPEN_TPDO_MAX_MAP_QTY     2
#define CANOPEN_TPDO_DYN_COM_EN      DEF_ENABLED
#define CANOPEN_TPDO_DYN_MAP_EN      DEF_ENABLED


/*
*********************************************************************************************************
*********************************************************************************************************
*                                      CANOPEN SYNC CONFIGURATION
*********************************************************************************************************
*********************************************************************************************************
*/

#define CANOPEN_SYNC_EN              DEF_DISABLED


/*
*********************************************************************************************************
*********************************************************************************************************
*                                      CANOPEN DEBUG CONFIGURATION
*********************************************************************************************************
*********************************************************************************************************
*/

#define CANOPEN_DBG_CTR_ERR_EN       DEF_DISABLED


/*
*********************************************************************************************************
*********************************************************************************************************
*                                               MODULE END
*********************************************************************************************************
*********************************************************************************************************
*/

#endif  /* _CANOPEN_CFG_H_ */
