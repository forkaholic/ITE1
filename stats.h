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
 * @file stats.h 
 * @brief function sigs for stats
 *
 * Provides function signatures for functions that calculate basic statistics
 * as well as auxillary functions necessary to operation.
 *
 * @author Devin Salter
 * @date 12/27/2024
 *
 */

/*
 * Prints the following statistics on the int* of size size_t
 * *Median
 * *Mean
 * *Maximum
 * *Minumum
 */
void print_statistics(int*, size_t);

/*
 * Prints the values stored in the int* of size size_t
 */
void print_array(int*, size_t);

/*
 * Finds the median value in the int* of size size_t
 */
int find_median(int*, size_t);

/*
 * Calculates the mean value of the int* of size size_t
 */
int find_mean(int*, size_t);

/*
 * Finds the maximum value in the int* of size size_t
 */
int find_maximum(int*, size_t);

/*
 * Finds the minimum value in the int* of size size_t
 */
int find_minimum(int*, size_t);

/*
 * Sorts the int* of size size_t from the largest to smallest value
 */
void sort_array(int*, size_t);

