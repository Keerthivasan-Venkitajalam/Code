#include <stdio.h>
#include <stdlib.h>

#include "function.h"

/** 
	A function to swap the double values in two locations.
	@param d1 address of the first value
	@param d2 address of the second value
*/
void swap(double* d1, double* d2) {
	double temp = *d1;
    *d1 = *d2;
    *d2 = temp;
}

/** 
	A recursive function to find the number of occurrences 
		of a character in a string.
	@param str starting address of the string
	@param ch the character
	@return number of occurrences of the character ch in the string str
*/
int recCountChar(char* str, char ch) {
	if (*str == '\0') {
        return 0;
    }
    if (*str == ch) {
        return 1 + recCountChar(str + 1, ch);
    } else {
        return recCountChar(str + 1, ch);
    }
}

/** 
	A recursive function to return the index of 
		the smallest element in an array.
	If the minimum element is present more than once in the array, 
		return the index of its first occurrence.
	@param A starting address of the array
	@param n number of elements in the array
	@return the index of the smallest element in the array
*/
int recMinIndex(double* A, int n) {
	if (n == 1) {
        return 0;
    }
    int minIndex = recMinIndex(A + 1, n - 1) + 1;
    return (A[0] <= A[minIndex]) ? 0 : minIndex;
}

/** 
	A recursive function to find the index of the first occurrence
		of an element in an array.
	If the element is not present in the array, return -1.
	@param A starting address of the array
	@param n number of elements in the array
	@param value an element in the array
	@return index of the first occurrence of the element in the array
*/
int recFindIndex(double* A, int n, double value) {
	if (n == 0) {
        return -1;
    }
    if (A[0] == value) {
        return 0;
    }
    int index = recFindIndex(A + 1, n - 1, value);
    if (index == -1) {
        return -1;
    }
    return index + 1;
}

/** 
	A recursive function to place the nth element A[n-1] of an array A
	in which the first n-1 elements A[0..n-2] are in non-decreasing order, 
	such that the entire array of n elements is in non-decreasing order.
	@param A starting address of the array
	@param n number of elements in the array
*/
void recInsert(double* A, int n) {
	if (n <= 1) {
        return;
    }
    recInsert(A, n - 1);
    double last = A[n - 1];
    int j = n - 2;
    while (j >= 0 && A[j] > last) {
        A[j + 1] = A[j];
        j--;
    }
    A[j + 1] = last;
}

/** 
	A recursive function to sort an array in non-decreasing order
		using SELECTION SORT.
	@param A starting address of the array
	@param n number of elements in the array
*/
void recSelectionSort(double* A, int n) {
	if (n <= 1) {
        return;
    }
    int minIndex = recMinIndex(A, n);
    swap(&A[0], &A[minIndex]);
    recSelectionSort(A + 1, n - 1);
}

/** 
	A recursive function to sort an array in non-decreasing order
		using INSERTION SORT.
	@param A starting address of the array
	@param n number of elements in the array
*/
void recInsertionSort(double* A, int n) {
	if (n <= 1) {
        return;
    }
    recInsertionSort(A, n - 1);
    recInsert(A, n);
}

/******************************************************************************/

/** 
	A function to create a doubleArray,
		dynamically allocate memory to store n doubles,
		initialize the capacity of the array as n, 
		and length of the array as 0,
		and return the address of the array.
	@param n capacity of the array
	@return address of the array
*/
doubleArray* createArray(int n) {
	doubleArray* arr=(doubleArray*)malloc(sizeof(doubleArray));
	arr->start=(double*)malloc(n*sizeof(double));
	for(int i=0;i<n;i++){
		arr->start[i]=-1;
	}
	arr->length=0;
	arr->capacity=n;
	return arr; 
}


/** 
	A function to print the elements in a double array.
	If the array is empty (0 elements), print -1 and a newline.
	A double value should be printed with only two decimal points.
	The elements should be printed with a single space character 
		separating each element.
	After printing all the elements, add a newline.
	@param A address of the array
	@example if the array is [12.903, 3.347, 4.2],
		then the following output should be printed (without quotes) 
		with a newline at the end:
		"12.90 3.35 4.00 "
*/

void printarray(double*A,int n){
	if(n==0){
		printf("\n");
	}
	else{
		printf("%0.2lf ",A[0]);
		printarray(A+1,n-1);
	}
}

void printArray(doubleArray* A) {
	if(A->length==0){
		printf("-1\n");
	}
	else{
		printarray(A->start,A->length);
	}
}


/** 
	A function to insert a given value at a given index in an array,
		provided that the array is not at full capacity.
	If the index is greater than the length of the array, 
		insert the value as the last element in the array.
	@param A address of the array
	@param i the index
	@param d the value
	@return If the insertion was successful, 
				the index at which the value was inserted.
			If the insertion failed, -1.
*/
int insertAt(doubleArray* A, int i, double d) {
	double temp;
	if((A->length)==A->capacity){
		return -1;
	}
	if(i>=A->length){
		A->start[A->length]=d;
		A->length++;
		return (A->length)-1;
	}
	else{
		temp = A->start[i];
		A->start[i]=d;
		return (insertAt(A,i+1,temp)-1);
	}
}

/** 
	A function to insert a given value as the first element of an array,
		provided that the array is not at full capacity.
	@param A address of the array
	@param d the value
	@return If the insertion was successful, 
				the index at which the value was inserted.
			If the insertion failed, -1.
*/
int insertFirst(doubleArray* A, double d) {
	return insertAt(A,0,d); 
}

/** 
	A function to insert a given value as the last element of an array,
		provided that the array is not at full capacity.
	@param A address of the array
	@param d the value
	@return If the insertion was successful, 
				the index at which the value was inserted.
			If the insertion failed, -1.
*/
int insertLast(doubleArray* A, double d) {
	return insertAt(A,A->length,d);
}

/** 
	A function to insert a given value d2 just before 
		the first occurrence of a value d1 in an array,
		provided that the array is not at full capacity.
	If d1 is not present in the array, return -1.
	@param A address of the array
	@param d1 the value in the array 
	@param d2 the value to be inserted
	@return If the insertion was successful, 
				the index at which the value was inserted.
			If the insertion failed, -1.
*/
int insertBefore(doubleArray* A, double d1, double d2) {
	int loc = recFindIndex(A->start,A->length,d1);
	if(loc==-1) return -1;
	return insertAt(A,loc,d2);
}

void shiftl(double*a,int n){
	if(n<=1) 
	return;
	*a=*(a+1);
	shiftl(a+1,n-1);
}

/** 
	A function to delete the value at a given index in an array.
	If the index is invalid, return -1.
	@param A address of the array
	@param i the index
	@return If the deletion was successful, the value which was deleted.
			If the deletion failed, -1.
*/
double deleteAt(doubleArray* A, int i) {
	if (i < 0 || i >= A->length) {
        return -1;
    }
    double deletedValue = A->start[i];
	shiftl(A->start+i,A->length-i);
	A->length-=1;

    return deletedValue;
}

/** 
	A function to delete the first element of an array,
		provided that the array is not empty.
	@param A address of the array
	@return If the deletion was successful, the value which was deleted.
			If the deletion failed, -1.
*/
double deleteFirst(doubleArray* A) {
	return deleteAt(A,0); 
}

/** 
	A function to delete the last element of an array,
		provided that the array is not empty.
	@param A address of the array
	@return If the deletion was successful, the value which was deleted.
			If the deletion failed, -1.
*/
double deleteLast(doubleArray* A) {
	return deleteAt(A,A->length-1); 
}

/** 
	A function to delete the first occurrence of a given value in an array.
	If the given value is not present in the array, return -1.
	@param A address of the array
	@param d1 the value in the array 
	@return If the deletion was successful, the value which was deleted.
			If the deletion failed, -1.
*/
double deleteValue(doubleArray* A, double d1) {
	int idx=recFindIndex(A->start,A->length,d1);
	double x=A->start[idx];
	if(idx==-1) return -1;
	deleteAt(A,idx);
	return x; 
}

/** 
	A function to process a double array as follows.
	Repeatedly read a character command from the user, and 
		perform the following operations based on the command.
	'p': print the elements in the array using printArray() function.
	'i': command 'i' will be followed by another character from 
			{'a', 'f', 'l', 'b'}, separated by a space.
			If the next character is,
			'a': character 'a' will be followed by an index i, 
					and a double value d, separated by space. 
					Insert d at index i in the array using insertAt() function.
			'f': character 'f' will be followed by a double value d, separated by a space. 
					Insert d as the first element of the array using insertFirst() function.
			'l': character 'l' will be followed by a double value d, separated by a space. 
					Insert d as the last element of the array using insertLast() function.
			'b': character 'b' will be followed by two double values d1 and d2, 
					separated by space. Insert d2 just before 
					the first occurrence of d1 in the array using insertBefore() function.
		After a successful insertion, print the index (in a new line) 
			at which the new element was inserted.
		If the insertion failed, print -1 in a new line. 
	'd': command 'd' will be followed by another character from 
			{'a', 'f', 'l', 'v'}, separated by a space.
			if the next character is,
			'a': character 'a' will be followed by an index i, separated by a space. 
					Delete the value at index i in the array using deleteAt() function.
			'f': Delete the first element of the array using deleteFirst() function.
			'l': Delete the last element of the array using deleteLast() function.
			'v': character 'v' will be followed by a double value d, separated by space. 
					Delete the first occurrence of d in the array using deleteValue() function.
		After a successful deletion, print the value (in a new line) which was deleted.
		If the deletion failed, print -1 in a new line.
	'f': command 'f' will be followed by a double value d, separated by a space. 
			Find and print (in a new line) the index of 
				the first occurrence of d in the array using recFindIndex() function.
			If d is not present in the array, print -1 in a new line.
	's': stop the execution of the program.
	@param A address of the array
*/
void processArray(doubleArray* A) {
	    char command;
    while (scanf(" %c", &command) == 1 && command != 's') {
        double d1, d2;
        int i, index;
        switch (command) {
            case 'p':
                printArray(A);
                break;
            case 'i':
                scanf(" %c", &command);
                switch (command) {
                    case 'a':
                        scanf("%d %lf", &i, &d1);
                        printf("%d\n", insertAt(A, i, d1));
                        break;
                    case 'f':
                        scanf("%lf", &d1);
                        printf("%d\n", insertFirst(A, d1));
                        break;
                    case 'l':
                        scanf("%lf", &d1);
                        printf("%d\n", insertLast(A, d1));
                        break;
                    case 'b':
                        scanf("%lf %lf", &d1, &d2);
                        printf("%d\n", insertBefore(A, d1, d2));
                        break;
                }
                break;
            case 'd':
                scanf(" %c", &command);
				double value;
                switch (command) {
                    case 'a':
                        scanf("%d", &i);
						value = deleteAt(A, i);
                        break;
                    case 'f':
						value = deleteFirst(A);
                        break;
                    case 'l':
						value = deleteLast(A);
                        break;
                    case 'v':
                        scanf("%lf", &d1);
						value = deleteValue(A, d1);
                        break;
                }
				if(value == -1){
					printf("-1\n");
				}
				else{
					printf("%.2lf\n", value);
				}
                break;
            case 'f':
                scanf("%lf", &d1);
                printf("%d\n", recFindIndex(A->start, A->length, d1));
                break;
        }
    }

}

/*******************************************************************************/

