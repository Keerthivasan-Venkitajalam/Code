/*
 **************************** DO NOT EDIT THIS FILE ****************************
 ************ ANY CHANGES MADE WILL BE DISCARDED BEFORE EVALUATION *************

 * Question:
	Implement RECURSIVE BINARY SEARCH.
	Print the number of times the binarySearch() function is called.
 * Instructions:
	Complete the function/s
		binarySearch()
	in the file sorting.c.
 * Execution Example/s:
	~Example 1
		Enter the number of elements: 6
		Enter 6 elements: 10 20 30 40 50 60
		Enter the element to be searched: 20
		20 is present at index 1 in the array
		Number of binarySearch calls made: 2
	~Example 2
		Enter the number of elements: 6
		Enter 6 elements: 10 20 30 40 50 60
		Enter the element to be searched: 70
		70 is not present in the array
		Number of binarySearch calls made: 3
	~Example 2
		Enter the number of elements: 6
		Enter 6 elements: 10 20 30 40 50 60
		Enter the element to be searched: 15
		15 is not present in the array
		Number of binarySearch calls made: 4
*/

#include <stdio.h>
#include <stdlib.h>

#include "structure.h"
#include "sorting.h"

int binarySearchCount = 0;
int comparisons = 0;

int main()
{
	int n, value;

	printf("Enter the number of elements: ");
	scanf("%d%*c", &n);

	int* A = malloc(n * sizeof(int));

	printf("Enter %d elements: ", n);
	readArray(A, n);

	printf("Enter the element to be searched: ");
	scanf("%d%*c", &value);

	int index = binarySearch(A, n, value);

	if(index == -1) {
		printf("%d is not present in the array\n", value);
	}
	else {
		printf("%d is present at index %d in the array\n", value, index);
	}

	printf("Number of binarySearch calls made: %d\n", binarySearchCount);

	return 0;
}
