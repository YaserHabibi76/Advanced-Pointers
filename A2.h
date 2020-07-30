#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct Double_Array {
int rowsize;
int colsize;
double **array;/*call this array*/
};


struct Double_Array * double_array (int row, int col);
double rand_double(double a, double b);
void randomize_array(struct Double_Array * ran, double one, double two);
void print_array(struct Double_Array * ran);
void free_(struct Double_Array * ran, double one, double two);
int swap_rows(struct Double_Array * ran, int one, int two);
/*struct Double_array * shallow_copy(struct Double_Array * d_array);*/

/*void print_struct (struct Double_Array * d_array, char * header_string);*/
/*
struct Double_Array *deep_copy(struct Double_Array * deep_array);
*/
