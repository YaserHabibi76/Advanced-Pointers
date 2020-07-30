#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "A2.h"

/*
 * Program name: rand_double.c
 * Author: Yaser Habibi
 * Function: Generating random numbers within a range.s
*/

double rand_double(double a, double b){
	double place_holder;
	double temp;
	place_holder = (((double) rand() / (double) RAND_MAX) * (b - a) + a);

	if (a > b){
		temp = a;
		a = b;
		b = temp;
		place_holder = (((double) rand() / (double) RAND_MAX) * (b - a) + a);
	}
	
	return place_holder;

}