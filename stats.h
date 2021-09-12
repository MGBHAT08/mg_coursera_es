/******************************************************************************
 * Copyright (C) 2017 by Alex Fosdick - University of Colorado
 *
 * Redistribution, modification or use of this software in source or binary
 * forms is permitted as long as the files maintain this copyright. Users are 
 * permitted to modify this and use it to learn about the field of embedded
 * software. Alex Fosdick and the University of Colorado are not liable for any
 * misuse of this material. 
 *
 *****************************************************************************/
/**
 * @file <Add File Name> 
 * @brief <Add Brief Description Here >
 *
 * <Add Extended Description Here>
 *
 * @author <Add FirsName LastName>
 * @date <Add date >
 *
 */
#ifndef __STATS_H__
#define __STATS_H__

char *sort_array(unsigned char data[],int sizes);
/* Function to sort an array in descending order.
 * Takes 2 inputs. An unsigned char array data[] and integer sizes for size of the array
 * outputs a 1D unsigned char array of size[sizes]
*/

char find_mean(unsigned char data[],int sizes);
/* Function to find mean of an array.
 * Takes 2 inputs. An unsigned char array data[] and integer sizes for size of the array
*/

char find_median(unsigned char data[],int sizes);
/* Function to find median of an array.
 * Takes 2 inputs. An unsigned char array data[] and integer sizes for size of the array
*/

char find_maximum(unsigned char data[],int sizes);
/* Function to find maximum of an array.
 * Takes 2 inputs. An unsigned char array data[] and integer sizes for size of the array
*/

char find_minimum(unsigned char data[],int sizes);
/* Function to find minimum of an array.
 * Takes 2 inputs. An unsigned char array data[] and integer sizes for size of the array
*/

char print_statistics(unsigned char data[],int sizes);
/* Function to print mathematical stats of an array.
 * Takes 2 inputs. An unsigned char array data[] and integer sizes for size of the array
*/

char print_array(unsigned char data[],int sizes);
/* Function to print an array.
 * Takes 2 inputs. An unsigned char array data[] and integer sizes for size of the array
*/

#endif /* __STATS_H__ */
