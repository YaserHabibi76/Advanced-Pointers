#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "A2.h"

/*
 * Program name: swap_columns.c
 * Author: Yaser Habibi
 * Function: A function that takes in a pointer to a struct and two integers
 			if the two integers are within the range, then the corresponding 
 			columns are swapped.

 * Fast Approach Denied: The fast approach does not work for swapping columns 
 			because the pointers point to each row and hence the long 
 			approach must be used to swap the columns

*/

int swap_columns(struct Double_Array * ran, int one, int two){ /* Pointer to a struct */

	int i=0;
	double temp;
	int j=0;
	for (i=0; i<ran->rowsize; i++){
		for (j=0; j<ran->colsize; j++){
			if (j == one){ /*If the loop reaches column one*/
				temp = ran->array[i][one]; /*Store that element in temp*/        
				ran->array[i][one] = ran->array[i][two]; /*make first column element equal to second columns element*/
				ran->array[i][two] = temp; /*Assign second column element to temp*/
			}
		}
	}
}