/**************************************************************************//**
 * @file
 * Fast box blur.
 *****************************************************************************/

#ifndef BLUR_H
#define BLUR_H

/******************************************************************************
 * #include
 *****************************************************************************/
 #include <stdint.h>

/******************************************************************************
 * #define
 *****************************************************************************/

/******************************************************************************
 * Types and structures
 *****************************************************************************/

/******************************************************************************
 * Global and public variables
 *****************************************************************************/

/******************************************************************************
 * Public functions
 *****************************************************************************/ 
void blur(uint32_t w, uint32_t h, float s[][h], float d[][h], uint32_t r);

#endif
