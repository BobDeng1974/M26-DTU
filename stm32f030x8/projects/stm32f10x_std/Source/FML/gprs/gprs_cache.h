/**
 **************************************************************************************************
 * @file        gprs_cache.h
 * @author
 * @version    v0.1.0
 * @date        
 * @brief
 **************************************************************************************************
 * @attention
 *
 **************************************************************************************************
 */
#ifndef _GPRS_CACHE_H_
#define _GPRS_CACHE_H_
#include "stm32f0xx.h"
#include "system_info.h"
/**
 * @addtogroup    XXX 
 * @{ 
 */

/**
 * @addtogroup    gprs_cache_Modules 
 * @{  
 */

/**
 * @defgroup      gprs_cache_Exported_Macros 
 * @{  
 */

/**
 * @}
 */

/**
 * @defgroup      gprs_cache_Exported_Constants
 * @{  
 */

/**
 * @}
 */

/**
 * @defgroup      gprs_cache_Exported_Types 
 * @{  
 */
typedef struct
{
    uint8_t SocketNum;
    uint16_t Len;
    uint8_t Buf[512];
}Server_receiveDataInfo_t;


typedef struct
{
	uint8_t Buf[300];
	uint16_t Len;
}receive_buf_t;

typedef struct
{
	uint8_t Buf[512];
	uint16_t Len;
	uint8_t Mux;
}socket_buf_t;

typedef struct
{
    Server_receiveDataInfo_t buf[1];
    uint8_t In;	
    uint8_t Out;
    uint8_t Count;
    uint8_t Size;
}Server_receiveDataInfo_Cache_t;  //��������Ϣ����   1K  

typedef struct 
{ 
  socket_buf_t Buf[2];
  uint8_t In;	
  uint8_t Out;
  uint16_t Count;
  uint16_t Size;  
}Socket_Cache_t;  //USART1���� ������  

typedef struct 
{ 
  receive_buf_t Buf[2];
  uint8_t In;	
  uint8_t Out;
  uint16_t Count;
  uint16_t Size;  
}Receive_Cache_t; //USART1���ջ��� AT����

typedef struct 
{ 
  uint8_t *pData;
  uint16_t In;	
  uint16_t Out;
  uint16_t Count;
  uint16_t Size;  
}USART_Receive_t; //USART2���ջ���  
/**
 * @}
 */

/**
 * @defgroup      gprs_cache_Exported_Variables 
 * @{  
 */
extern Server_receiveDataInfo_Cache_t Server_receiveDataInfo;  //�������ķ���������Ϣ  ��
extern Receive_Cache_t g_AT_ReceiveBuf ;  // ATָ��� USART1   
extern Socket_Cache_t g_Machine_TransmitBuf; //����ú�����ݷ��ͻ���     ��
extern USART_Receive_t g_Machine_ReceiveBuf;  //��Ƭ�����ղɿ�ƽ̨���ڵĻ���  ������ͽ���  ��
  /**
 * @}
 */

/**
 * @defgroup      gprs_cache_Exported_Functions 
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
#endif
