#include "func.h"
#include "stm32f4xx_hal.h"

void SetPeriod(TIM_HandleTypeDef *htim, uint32_t period)
{
    __HAL_TIM_SET_AUTORELOAD(htim, period);
    __HAL_TIM_SetCompare(htim, TIM_CHANNEL_1, period/2);
}

void StartAxis(TIM_HandleTypeDef *htim)
{
    HAL_TIM_PWM_Start_IT(htim, TIM_CHANNEL_1);
}

void StopAxis(TIM_HandleTypeDef *htim)
{
    HAL_TIM_PWM_Stop_IT(htim, TIM_CHANNEL_1);
}

typedef enum Direction
{
    FORWARD,
    BACKWARD
} Direction;

typedef struct Coordinates
{
    int x;
    int y;
    int z;
} Coordinates;

typedef struct Axis
{
    Direction dir;
    int coord;
} Axis;
