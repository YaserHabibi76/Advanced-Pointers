#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "A2.h"

/*
 * Program name: swap_rows.c
 * Author: Yaser Habibi
 * Function: Two rows are swapped, row numbers are passed in parameters. 
 			Only swap the rows if within the limit

 * Fast Approach: I switched the pointers for the fast approach 		
*/

int swap_rows(struct Double_Array * ran, int one, int two){ /* Pointer to a struct */

	double *temp;
	int row;

	/* We are using the faster approach */

	row = ran->rowsize;

	/*Checking if the row numbers are within the limit*/
	if (one > row || one < 0){
		printf("Invalid row number\n");
		return 0;
	}
	else if (two > row || two < 0){
		printf("Invalid row number.\n");
		return 0;
	}

	temp = ran->array[one]; /*first row in temp pointer to double*/
	ran->array[one] = ran->array[two]; /*first row equal to second row*/
	ran->array[two] = temp; /*row two is equal to the temp*/
	
	return 1;


}