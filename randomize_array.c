#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "A2.h"

/*
 * Program name: randomize_array.c
 * Author: Yaser Habibi
 * Function: A function that takes a Double_Array struct, and two values of type
 			double and initializes each element of the array in Double_Array to a randomly 		
 			generated value between the two input values. 
*/

void randomize_array(struct Double_Array * ran, double one, double two){ /* Pointer to a struct */
	
	int i =0, j;


	/* Pointing to 2-dimensional double array */
	ran->array = malloc (ran->rowsize * sizeof(double*)); /*mallocing space for the rowsize */
	/* You need a star for the double above since it is pointing to a 2d array*/
	/* Likewise, you don't need a star for the double below since you are pointing to a single array*/

	for (i=0; i<ran->rowsize; i++){ /* for each row */
		ran->array[i] = malloc(sizeof(double) * ran->colsize); /*column size from within ran*/
		for (j = 0; j < ran->colsize; j++) { /* for each column */
			ran->array[i][j] = rand_double(one, two);

		}
	}

}