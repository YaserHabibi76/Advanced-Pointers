#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "A2.h"

/*
 * Program name: print_array.c
 * Author: Yaser Habibi
 * Function: A function that takes struct pointer and prints
 			the array with each element displaying 1 decimal place
*/
void print_array(struct Double_Array * ran){ /* Pointer to a struct */
	int i =0,j=0;
	printf("\n");
	for (i=0; i<ran->rowsize; i++){ /*looping through the rows*/
		for (j=0; j<(ran->colsize); j++){ /*looping through the rows*/

			printf("%7.1f", ran-> array[i][j]); /*printing each number*/

 		}

 		printf("\n");
	
	}

}