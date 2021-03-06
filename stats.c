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
 * @file stats.c 
 * @brief "a simple stats computing code"
 *
 * 
 *
 * @author Mahesh Ganesh Bhat
 * @date 12th Sept. 2021
 *
 */



#include <stdio.h>
#include "stats.h"

/* Size of the Data Set */
#define SIZE (40)

void main() {

  unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};
 
  unsigned char data[SIZE];
  unsigned char *temp_pointer;
  int i=0;

  temp_pointer = sort_array(test, SIZE); /* Function call to sort the array*/
  for (i=0;i<SIZE;i++){
    data[i] = *(temp_pointer+i);
  }
  print_statistics(data, SIZE); /* Function call to print the stats of the array*/
  print_array(data, SIZE); /* Function call to print the array*/

}

char print_statistics(unsigned char data[], int sizes) {

 /* Function to print the array stats such as min, max, mean and median*/

  find_maximum(data, sizes); 
  find_minimum(data, sizes);
  find_mean(data, sizes);
  find_median(data, sizes);

  return 0;
}

char print_array(unsigned char data[], int sizes) {

/* Function to print the array*/
  int i=0;

  printf("[");
  for (i=0;i<sizes;i++){
    printf("%d,",data[i]);
  }
  printf("]\n");
  return 0;
}

char find_maximum(unsigned char data[], int sizes) {

/* Function to find the max value of the array*/

  int i=0;
  unsigned char maximum;
  maximum = data[0];
  for (i=1;i<sizes;i++){
    if(data[i]>maximum){
      maximum = data[i];
    }
  }

  printf("max value is %d \n",maximum);

}

char find_minimum(unsigned char data[], int sizes) {

/* Function to find the min value of the array*/
  int i=0;
  unsigned char minimum;
  minimum = data[0];
  for (i=1;i<sizes;i++){
    if(data[i]<minimum){
      minimum = data[i];
    }
  }

  printf("min value is %d \n",minimum);

}

char find_mean(unsigned char data[], int sizes) {

/* Function to find the mean value of the array*/
  int i=0;
  unsigned char mean=0;
  for (i=1;i<sizes;i++){
    mean += data[i];
  }
  mean = mean / 2;

  printf("mean value is %d \n",mean);
  return 0;
}

char find_median(unsigned char data[], int sizes) {

/* Function to find the median value of the array*/

  unsigned char median;
  int midpoint1, midpoint2;

  if (sizes % 2 == 0){
    midpoint1 = (sizes / 2);
    midpoint2 = (sizes / 2)+1;
    median = (data[midpoint1] + data[midpoint2]) / 2;
  }
  else{
    midpoint1 = (sizes/2)+1;
    median = data[midpoint1];
  }

  printf("Median is %d \n", median);
  return 0;
}

char *sort_array(unsigned char data[],int sizes) {

/* Function to sort an array in descending order*/

  int i,j;
  unsigned char temp;

  for (i=0;i<sizes;i++) {
    for (j=i+1;j<sizes;j++) {

     if (data[i]<data[j]) {
       temp = data[j];
       data[j] = data[i];
       data[i] = temp;
    }
  }
  }
  print_array(data, sizes);
  return(data);
}
