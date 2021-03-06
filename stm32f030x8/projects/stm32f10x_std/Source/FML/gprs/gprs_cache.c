/**
 **************************************************************************************************
 * @file        gprs_cache.c
 * @author
 * @version   v0.1.0
 * @date        
 * @brief
 **************************************************************************************************
 * @attention
 *
 **************************************************************************************************
 */
#include "gprs_cache.h"
#include "stm32_bsp_conf.h"
/**
 * @addtogroup    XXX 
 * @{  
 */

/**
 * @addtogroup    gprs_cache_Modules 
 * @{  
 */

/**
 * @defgroup      gprs_cache_IO_Defines 
 * @brief         
 * @{  
 */

/**
 * @}
 */

/**
 * @defgroup      gprs_cache_Macros_Defines 
 * @brief         
 * @{  
 */

/**
 * @}
 */

/**
 * @defgroup      gprs_cache_Constants_Defines 
 * @brief         
 * @{  
 */

/**
 * @}
 */

/**
 * @defgroup      gprs_cache_Private_Types
 * @brief         
 * @{  
 */

/**
 * @}
 */

/**
 * @defgroup      gprs_cache_Private_Variables 
 * @brief         
 * @{  
 */
uint8_t USART2_Rx_Buf[BSP_USART2_RXBUF_SIZE];
uint8_t M26Trans_Buf[M26TRANSBUF_SIZE]; //M26���ͻ���
/**
 * @}
 */

/**
 * @defgroup      gprs_cache_Public_Variables 
 * @brief         
 * @{  
 */

Server_receiveDataInfo_Cache_t Server_receiveDataInfo=
{
    .In=0,
    .Out=0,
    .Count=0,
    .Size=sizeof(Server_receiveDataInfo.buf)/sizeof(Server_receiveDataInfo.buf[0]),
};

Receive_Cache_t g_AT_ReceiveBuf =
{   
    .In = 0,
    .Out = 0,
    .Count = 0,
    .Size = sizeof(g_AT_ReceiveBuf.Buf)/sizeof(g_AT_ReceiveBuf.Buf[0]),
};

Socket_Cache_t g_Machine_TransmitBuf=
{   
    .pData=M26Trans_Buf,
    .In = 0,
    .Out = 0,
    .Count = 0,
    .Size = M26TRANSBUF_SIZE ,
};

USART_Receive_t g_Machine_ReceiveBuf=
{   
    .pData = USART2_Rx_Buf,
    .In = 0,
    .Out = 0,
    .Count = 0,
    .Size = BSP_USART2_RXBUF_SIZE,
};  
/**
 * @}
 */

/**
 * @defgroup      gprs_cache_Private_FunctionPrototypes 
 * @brief         
 * @{  
 */

/**
 * @}
 */

/**
 * @defgroup      gprs_cache_Functions 
 * @brief         
 * @{  
 */

/**
 * @}
 */

/**
 * @}
 */

/**
 * @}
 */

