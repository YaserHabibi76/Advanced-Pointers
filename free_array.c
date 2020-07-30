#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "A2.h"

/*
 * Program name: free_array.c
 * Author: Yaser Habibi
 * Function: Takes a Double_Array struct pointer and frees the 
 			struct as well as the array within it
*/

void free_array(struct Double_Array * ran, double one, double two){ /* Pointer to a struct */
	int i =0;
	/* only have to free the rows since the columns are not pointers */
	for (i=0; i< ran->rowsize;i++){
		free(ran->array[i]);
	}

	free(ran->array);
}