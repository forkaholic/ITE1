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
 * @brief Implementations of stats.h
 *
 * Provides the implementations for the functions to find statistical values in stats.h
 *
 * @author Devin Salter
 * @date 12/29/2024
 *
 */

#include <stdio.h>
#include "stats.h"

/* Size of the Data Set */
#define SIZE (40)

void sort_array(unsigned char* array, size_t size) {
  if(size == 0) return;
  unsigned char temp = 0;
  for(size_t current = 0; current < size - 1; current++) {
    for(size_t check = current + 1; check < size; check++) {
      if(array[current] < array[check]) {
        temp = array[current];
        array[current] = array[check];
	array[check] = temp;	
      } 

    }
  }
}

unsigned char find_median(unsigned char* array, size_t size) {
  if(size == 0) return 0;
  else if(size % 2 == 0) return (array[size / 2 - 1] + array[size / 2]) / 2;
  else return array[size / 2];
}

unsigned char find_mean(unsigned char* array, size_t size) {
  if(size == 0) return 0;
  unsigned long total = 0;
  for(size_t index = 0; index < size; index++) {
    total += array[index];
  }
  return (unsigned char)(total / size);
}

unsigned char find_maximum(unsigned char* array, size_t size) {
  if(size == 0) return 0;
  return array[0];
}

unsigned char find_minimum(unsigned char* array, size_t size) {
  if(size == 0) return 0;
  return array[size - 1];
}

void print_array(unsigned char* array, size_t size) {
  size_t total = 0;
  size_t col = 0;
  while(total < size) {
    printf("%d ", array[total]);
    
    col++;
    total++;

    if(col==8) {
      printf("\n");
      col = 0;
    }
  }
}

void print_statistics(unsigned char* array, size_t size) {
  printf("Median: %d\n", find_median(array, size));
  printf("Mean: %d\n", find_mean(array, size));
  printf("Maximum: %d\n", find_maximum(array, size));
  printf("Minimum: %d\n", find_minimum(array, size));
}

int main() {

  unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};
  
  sort_array(test, SIZE); 

  print_array(test, SIZE);
  printf("\n");
  print_statistics(test, SIZE);

  return 0;
}




