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
 * @file <stats.h> 
 * @brief <Header file for stats.c. Performs statistical analysis on a dataset.>
 *
 * <Add Extended Description Here>
 *
 * @author <T.Sai Pratyush >
 * @date <27-06-2020 >
 *
 *
 */
#ifndef __STATS_H__
#define __STATS_H__

/* Add Your Declarations and Function Comments here */ 

/**
 * @brief A function that prints the statistics of an array including minimum, 
 * maximum, mean, and median.
 *
 * @param arr The array containing the dataset of unsigned chars
 * @param len The length of the array
 *
 * @return NULL
 */
void print_statistics(unsigned char arr[],int len);


/** 
 * @brief Given an array of data and a length, prints the array to the screen
 *
 * @param arr An array of unsigned chars
 * @param len The length of the array
 *
 * @return NULL
 */
void print_array(unsigned char arr[],int len);


/** 
 * @brief Given an array of data and a length, returns the median value
 *
 * @param arr An array of unsigned chars
 * @param len The length of the array
 *
 * @return median The median of the array
 */
float find_median(unsigned char arr[],int len);


/** 
 * @brief Given an array of data and a length, returns the min value
 *
 * @param arr An array of unsigned chars
 * @param len The length of the array
 *
 * @return median The min of the array
 */
int find_minimum(unsigned char arr[],int len);


/** 
 * @brief Given an array of data and a length, returns the max value
 *
 * @param arr An array of unsigned chars
 * @param len The length of the array
 *
 * @return median The max of the array
 */
int find_maximum(unsigned char arr[],int len);


/** 
 * @brief Given an array of data and a length, returns the mean value
 *
 * @param arr An array of unsigned chars
 * @param len The length of the array
 *
 * @return median The mean of the array
 */
float find_mean(unsigned char arr[],int len);


/** 
 * @brief Sorts the array using selection sort
 *
 * Selection sort is used despite its O(n^2) runtime because it has a 
 * spatial complexity of O(1) and that is more important in this 
 * embedded system context (limited memory).
 *
 * @param arr An array of unsigned chars
 * @param len The length of the array
 */
void sort_array(unsigned char arr[],int len);


#endif /* __STATS_H__ */
