#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "A2.h"

/*
 * Program name: shallow_copy.c
 * Author: Yaser Habibi
 * Function: Returns a copy of the Double_Array struct that is passed in (has a
 			different pointer value) but holds the same content.
*/

/*struct Double_Array * shallow_copy(struct Double_Array *d_array);*/
struct Double_Array * shallow_copy(struct Double_Array *d_array){
	struct Double_Array *d1; /*declaring a pointer to a struct*/
	d1 = d_array; /*copying the struct*/
	return d1; 
}