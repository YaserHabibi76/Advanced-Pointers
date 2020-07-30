#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "A2.h"

/*
 * Program name: a2_q2.c
 * Author: Yaser Habibi
 * Function: Calling various functions to perform various tasks,
 			 the description of each task is located inside each function
 			 file, as well as, the readme. 
*/

struct Double_Array * shallow_copy(struct Double_Array *d_array);
struct Double_Array * deep_copy(struct Double_Array *d_array);

int main (int argc, char* argv[]){


	char *array = "The structure pointed to by a1 is: \n";
	char *array2 = "The structure pointed to by a2 is: \n";
	int i,j;

	printf("---------------------------\n\n");
	printf("	Question 2a\n\n");
	printf("---------------------------\n\n");

	
	struct Double_Array * a1 = double_array(6,9);
	randomize_array(a1,0.0,10.0);
	printf("the address of a1 is %p\n",a1);
	print_struct(a1,array);

	
	struct Double_Array * shallow_array;
	shallow_array = shallow_copy(a1);
	

	struct Double_Array * a2 = double_array(6,9);
	a2=a1;
	printf("the address of a2 is %p\n",a2);
	print_struct(a2,array2); 



	struct Double_Array * a_shallow; /*declaring a pointer to a struct*/
	a_shallow = a1; /*copying the struct*/
	printf("the address of a_shallow is %p\n",a_shallow);
	print_struct(a2, array2);
	
	struct Double_Array * a_deep;
	/*deep_copy = deep_copy(a1);*/
	a_deep = a1;
	printf("the address of a_deep is %p\n", a_deep);
	print_struct(a2, array2);
	printf("\n");



	printf("---------------------------\n\n");
	printf("	Question 2b\n\n");
	printf("---------------------------\n\n");

	a1 -> array[0][1] = 100.0;
	a2 -> array[1][2] = 200.0;
	a_shallow -> array[2][3] = 300.0;
	a_deep -> array[3][4] = 400.0;


	print_array(a1);
	printf("\n\n");

	print_array(a2);
	printf("\n\n");

	print_array(a_shallow);
	printf("\n\n");

	print_array(a_deep);
	printf("\n\n");




	printf("---------------------------\n\n");
	printf("	Question 2c\n\n");
	printf("---------------------------\n\n");


	struct Double_Array *b1 = double_array (6,9);

	randomize_array(b1,10,20);

	for (i=0; i< a2-> rowsize; i++){
		for (j=0; j< a2-> colsize; j++){
			b1 -> array[i][j];
			a2 -> array[i][j];

			b1=a2;
		}

	}
/*
	print_array(a1);
	printf("\n\n");

	print_array(a2);
	printf("\n\n");

	print_array(a_shallow);
	printf("\n\n");

	print_array(a_deep);
	printf("\n\n");
*/
	a1 -> array[0][1] = 5000.0;
	a2 -> array[1][2] = 6000.0;
	a_deep -> array[2][3] = 700.0;
	b1 -> array[3][4] = 9000.0;

	/*Printing the Array*/

	print_array(a1);
	printf("\n\n");

	print_array(a2);
	printf("\n\n");

	print_array(a_shallow);
	printf("\n\n");

	print_array(a_deep);
	printf("\n\n");

	free(a1);
}

