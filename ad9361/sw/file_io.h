/***************************************************************************//**
 *   @file   file_io.h
 *   @brief  Header file of file io module
 *   @author Colden Rouleau (colden.rouleau@colorado.edu)
*******************************************************************************/
#ifndef FILE_IO_H_
#define PLATFORM_H_

/******************************************************************************/
/***************************** Include Files **********************************/
/******************************************************************************/
#include "stdint.h"
#include "util.h"

/******************************************************************************/
/********************** Macros and Constants Definitions **********************/
/******************************************************************************/


/******************************************************************************/
/************************ Functions Declarations ******************************/
/******************************************************************************/
void spi_log_close(void);
void spi_log_open(const char *filename);
void log_string(const char *str);

#endif