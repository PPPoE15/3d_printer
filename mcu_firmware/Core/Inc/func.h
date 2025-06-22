#ifndef FUNC_H
#define FUNC_H

#include "stm32f4xx_hal.h"


void SetPeriod(TIM_HandleTypeDef *htim, uint32_t period);
void StartAxis(TIM_HandleTypeDef *htim);
void StopAxis(TIM_HandleTypeDef *htim);


#endif //FUNC_H