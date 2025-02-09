/*
 **************************** DO NOT EDIT THIS FILE ****************************
 ************ ANY CHANGES MADE WILL BE DISCARDED BEFORE EVALUATION *************

 * Question:
	Read n integers and store them in an array.
	Print the elements stored in the array.
 * Instructions:
	Complete the function/s
		initArray()
		readArray()
		printArray()
	in the file array.c.
 * Execution Example/s:
	Enter the size of the array: 5
	Enter 5 elements:
	1 8 2 6 4
	The array elements are:
	1 8 2 6 4 
*/
#include <stdio.h>

#include "array.h"

int main()
{
	int n;
	int* A;

	printf("Enter the size of the array: ");
	scanf("%d", &n);

	A = initArray(n);

	printf("Enter %d elements:\n", n);
	readArray(A, n);

	printf("The array elements are:\n");
	printArray(A, n);

	return 0;
}
