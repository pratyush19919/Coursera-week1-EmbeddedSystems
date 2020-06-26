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
 * @file <stats.c> 
 * @brief <Functions to analize the stattics for an array like Maximum Number,Munimum Number
 Mean of array, Median of array etc>
 *
 * 
 *
 * @author <T Sai Pratyush>
 * @date <27-06-2020 >
 *
 */



#include <stdio.h>
#include "stats.h"

/* Size of the Data Set */
#define SIZE (40)

int find_maximum(unsigned char arr[],int len){
	int i;
	int c=arr[0];

	for(i=0;i<len;i++)
	{
		if(c < arr[i])
		{
			c=arr[i];
		}

	}
return c;}

int find_minimum(unsigned char arr[],int len){
	int i;
	int c=arr[0];

	for(i=0;i<len;i++)
	{
		if(c > arr[i])
		{
			c=arr[i];
		}

	}
return c;}



void print_array(unsigned char arr[],int len){
	int i;
	for(i=0;i<len;i++){
		printf("%d ,",arr[i]);
	}
}


float find_mean(unsigned char arr[],int len){
	int sum=0;
	int i;
	float mean;
	for(i=0;i<len;i++){
		sum=sum+arr[i];
	}
	mean=sum/(len*1.0);
return mean;}


void sort_array(unsigned char arr[],int len){
	int a;
	int i;
	int j;
	for(i=0;i<len;i++){
		for(j=0;j<40;j++){
			if(arr[i]<arr[j]){
				a=arr[i];
				arr[i]=arr[j];
				arr[j]=a;
			}
		}
	}
print_array(arr,SIZE);
}

float find_median(unsigned char arr[],int len){
	int a;
	int i;
	int j;
	float median;
	for(i=0;i<len;i++){
		for(j=0;j<40;j++){
			if(arr[i]<arr[j]){
				a=arr[i];
				arr[i]=arr[j];
				arr[j]=a;
			}
		}
	}
	if(len % 2 == 0){
		//printf("ind1, ind2 = %d %d\n", arr[(len/2) - 1], arr[(len/2)]);
		median = (arr[(len/2) - 1] + arr[len/2]) * 1.0 / 2;

	}
	else{
		median = arr[len/2];
	}
	
return median;}
void print_statistics(unsigned char arr[],int len){

	printf("The max number is = %d\n",find_maximum(arr,SIZE));
	printf("The min number is = %d\n",find_minimum(arr,SIZE));
	printf("The median is = %f\n",find_median(arr,SIZE));
	printf("The mean is = %f\n",find_mean(arr,SIZE));
}



int main() {

  unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};

  /* Other Variable Declarations Go Here */
  /* Statistics and Printing Functions Go Here */

print_statistics(test,SIZE);
return 0;
}

/* Add other Implementation File Code Here */





