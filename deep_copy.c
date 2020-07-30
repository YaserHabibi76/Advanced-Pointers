#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "A2.h"

/*
 * Program name: deep_copy.c
 * Author: Yaser Habibi
 * Function: that returns a copy of the Double_Array struct that is passed in
 			(has a different pointer value) but holds the same content. Any change 
 			to the interior of one struct should not be reflected in the other.
*/


struct Double_Array * deep_copy(struct Double_Array *d_array){
	struct Double_Array *double_array = malloc (sizeof(struct Double_Array*));
	int i =0,j=0;
	
	for (i=0; i<d_array->rowsize;i++){
		for (j=0; j<d_array->colsize;j++){
		double_array->array[i][j] = d_array->array[i][j];
		
		}
	}	
}