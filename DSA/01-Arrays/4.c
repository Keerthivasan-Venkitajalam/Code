/*
 **************************** DO NOT EDIT THIS FILE ****************************
 ************ ANY CHANGES MADE WILL BE DISCARDED BEFORE EVALUATION *************

 * Question:
	Read n distinct integers and store them in an array A.
	Find the largest index i in A such that the sub-array A[0..i]
		is in ascending order.
	If i is not the last index in A,
		Let m = A[i+1]; repeatedly swap m with the element to its left,
		until the sub-array A[0..i+1] is sorted in ascending order.
	Finally, print the array A.
 * Instructions:
	Complete the function/s
		initArray()
		readArray()
		findIndex()
		swapArray()
		printArray()
	in the file array.c.
 * Execution Example/s:
	Enter the size of the array: 10
	Enter 10 elements:
	12 15 24 28 29 32 41 20 31 17
	The array is sorted in ascending order till index 6
	The modified array is:
	12 15 20 24 28 29 32 41 31 17
*/
#include <stdio.h>

#include "array.h"

int main()
{
	int n, i;
	int* A;

	printf("Enter the size of the array: ");
	scanf("%d", &n);

	A = initArray(n);

	printf("Enter %d elements:\n", n);
	readArray(A, n);

	i = findIndex(A, n);
	printf("The array is sorted in ascending order till index %d\n", i);
	swapArray(A, n, i);

	printf("The modified array is: \n");
	printArray(A, n);

	return 0;
}
