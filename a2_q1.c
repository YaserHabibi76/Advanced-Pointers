#include "A2.h"

int main (int argc, char* argv[]){
	printf("---------------------------------\n\n");
	printf("	  Question 1\n\n");
	printf("---------------------------------\n\n");
	
    /* struct that holds a 6 row by 8 column array */
	struct Double_Array * g = double_array(6,9);
	randomize_array(g,2,10); /*initializing array in struct*/
	print_array(g);
	swap_rows(g,2,3); /*Swapping two rows*/
	printf("row 3 and row 4 were swapped\n");
	print_array(g);
	swap_columns(g,1,2); /*Swapping two columns*/
	printf("column 2 and column 3 were swapped\n");
	print_array(g);
	free_array(g); /*Freeing all memory, removing all memory leaks*/
	printf("\n\n\n");

	return 0;
} 