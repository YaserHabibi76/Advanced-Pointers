#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "A2.h"

/*
 * Program name: print_struct.c
 * Author: Yaser Habibi
 * Function: -That prints out a header string on the first line 
 			  (the string that was passed in as the second parameter)
 			 -"struct address=%p" on the second line
 			 -"row_size=%d,col_size=%d" on the third line
 			 -"array address=%p, with contents:" on the fourth line
 			 -Leave the fifth line blank
 			 -Print the array from the sixth line on 
 			 	(printed in the same way you did in print_array from Q1)
 			 -After the array is printed leave two blank lines
*/

void print_struct (struct Double_Array * d_array, char * header_string){
	
	printf("%s", header_string);
	printf("struct address=%p\n", d_array);	
	printf("row_size=%d, col_size=%d\n",d_array->rowsize, d_array->colsize);
	printf("array address=%p, with contents:\n",header_string);
	printf("\n");
	print_array(d_array);

	printf("\n\n");

}