#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "A2.h"

/*
 * Program name: double_array.c
 * Author: Yaser Habibi
 * Function: A function that returns a pointer to a struct. This function holds an unitialized
 			2 dimensional double array, the row size, and the column size.
*/


struct Double_Array * double_array (int row, int col){ /* Returns a pointer to a struct */
	struct Double_Array * double_array = malloc (sizeof(struct Double_Array*));
	double_array->rowsize=row; /* Pointer to struct is pointing to rowsize */
	double_array->colsize=col; /* Pointer to struct is pointing to colsize */
	double_array->array;

	return double_array; 

}