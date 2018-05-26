#pragma once

#include <stm32f7xx.h>

// Public Interface
typedef enum { CAL_LL_0         = 0x0
             , CAL_LL_1         = 0x1
             , CAL_LL_2         = 0x2
             , CAL_LL_3         = 0x3
             , CAL_LL_Reference = 0x4
             , CAL_LL_Disable   = 0x5
             , CAL_LL_ChannelList
} CAL_LL_Channel_t;

void CAL_LL_Init( void );
void CAL_LL_ActiveChannel( CAL_LL_Channel_t channel );

// Hardware Defines
#define CAL_0_GPIO_CLK_ENABLE()     __HAL_RCC_GPIOC_CLK_ENABLE()
#define CAL_1_GPIO_CLK_ENABLE()     __HAL_RCC_GPIOC_CLK_ENABLE()
#define CAL_2_GPIO_CLK_ENABLE()     __HAL_RCC_GPIOC_CLK_ENABLE()

#define CAL_0_PIN           GPIO_PIN_7
#define CAL_0_GPIO_PORT     GPIOC
#define CAL_1_PIN           GPIO_PIN_9
#define CAL_1_GPIO_PORT     GPIOC
#define CAL_2_PIN           GPIO_PIN_8
#define CAL_2_GPIO_PORT     GPIOC