/**
 **********************************************************************************
 * @file   sht3x_platform.h
 * @author Hossein.M (https://github.com/Hossein-M98)
 * @brief  SHT3x series driver platform dependent part
 **********************************************************************************
 *
 * Copyright (c) 2021 Mahda Embedded System (MIT License)
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in all
 * copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 * SOFTWARE.
 *
 **********************************************************************************
 */

/* Define to prevent recursive inclusion ----------------------------------------*/
#ifndef	_SHT3X_PLATFORM_H_
#define _SHT3X_PLATFORM_H_

#ifdef __cplusplus
extern "C" {
#endif


/* Includes ---------------------------------------------------------------------*/
#include "SHT3x.h"


/* Functionality Options --------------------------------------------------------*/
/**
 * @brief  Specify the target platform
 * @note   Uncomment the line below according to the target platform
 */ 
// #define SHT3X_PLATFORM_STM32_HAL
// #define SHT3X_PLATFORM_ESP32_IDF


#if defined(SHT3X_PLATFORM_STM32_HAL)
#define SHT3X_HI2C      hi2c2
#elif defined(SHT3X_PLATFORM_ESP32_IDF)
#define SHT3X_I2C_NUM   I2C_NUM_1
#define SHT3X_I2C_RATE  100000
#define SHT3X_SCL_GPIO  GPIO_NUM_13
#define SHT3X_SDA_GPIO  GPIO_NUM_14
#endif


/**
 ==================================================================================
                             ##### Functions #####                                 
 ==================================================================================
 */

void
SHT3x_Platform_Init(SHT3x_Handler_t *Handler);


#ifdef __cplusplus
}
#endif


#endif //! _SHT3X_PLATFORM_H_
