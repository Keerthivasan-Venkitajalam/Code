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
        return 0; // Base case: end of string reached
    } else {
        // If current character matches, increment count
        int count = (*str == ch) ? 1 : 0;
        // Move to the next character and recursively count
        return count + recCountChar(str + 1, ch);
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
        return 0; // Base case: only one element
    } else {
        int minIndex = recMinIndex(A, n - 1); // Recursively find minIndex for n-1 elements
        // Check if the current element is smaller than the smallest so far
        return (A[n - 1] < A[minIndex]) ? n - 1 : minIndex;
    }
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
    if (n <= 0) {
        return -1; // Base case: element not found
    } else if (A[0] == value) {
        return 0; // Found at current index
    } else {
        // Recursively search in the remaining elements
        int foundIndex = recFindIndex(A + 1, n - 1, value);
        // Adjust index to account for the first element
        return (foundIndex == -1) ? -1 : foundIndex + 1;
    }
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
        return; // Base case: Array with one or zero elements is already sorted
    }
    // Recursively place the nth element in the correct position
    recInsert(A, n - 1);
    // Swap adjacent elements until the nth element is in its correct position
    while (n > 1 && A[n - 1] < A[n - 2]) {
        swap(&A[n - 1], &A[n - 2]);
        n--;
    }
}

/** 
	A recursive function to sort an array in non-decreasing order
		using SELECTION SORT.
	@param A starting address of the array
	@param n number of elements in the array
*/
void recSelectionSort(double* A, int n) {
    if (n <= 1)
        return;

    int minIndex = recMinIndex(A, n);
    swap(&A[minIndex],&A[0]);

    recSelectionSort(A + 1, n - 1);
}

/** 
	A recursive function to sort an array in non-decreasing order
		using INSERTION SORT.
	@param A starting address of the array
	@param n number of elements in the array
*/
void recInsertionSort(double* A, int n) {
    if (n <= 1)
        return;

    recInsertionSort(A, n - 1);

    double last = A[n - 1];
    int j = n - 2;

    while (j >= 0 && A[j] > last) {
        A[j + 1] = A[j];
        j--;
    }
    A[j + 1] = last;
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
	//TODO
	doubleArray* A = malloc(sizeof(doubleArray));
	A->capacity=n;
	A->length=0;
	A->start=malloc(sizeof(double)*n);
	return A; // Replace the return value here as required
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
void printArray(doubleArray* A) {
	//TODO
	if(A->length==0){
		printf("-1");
	}
	else
	
	for(int i = 0; i < A->length; i++) {
		printf("%.2lf ",A->start[i]);
	}
	printf("\n");
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
	//TODO
	
	if(A->length==A->capacity){
		return -1;
	}
	else if(i<A->length){
		A->length++;
		for(int j=A->length-1;j>i;j--){
			(A->start[j])=(A->start[j-1]);
		}
		A->start[i]=d;
		return i;
	}
	else {
		A->length++;
		A->start[(A->length-1)]=d;

		return A->length-1;
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
	//TODO
	if(A->length==A->capacity){
		return -1;
	}
	else
	A->length++;
	A->start[(A->length-1)]=d;

	return A->length-1; // Replace the return value here as required
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
	//TODO

	int idx=0;
	int c=0;
	for(int i =0;i<A->length;i++){
		c++;
		if(A->start[i]==d1){
			idx=i;
			break;
		}
	}
	
	if(c==A->length){
		return -1;
	}
	else
		A->length++;
		for(int j=A->length-1;j>idx;j--){
			(A->start[j])=(A->start[j-1]);
		}
		A->start[idx]=d2;

		return idx;
 // Replace the return value here as required
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
	//TODO
	double deleted=A->start[i];
	if(i >=A->length || i<0){
		return -1;
	}
	else
		
		for(int j=i;j<A->length;j++){
			(A->start[j])=(A->start[j+1]);
		}
		A->length--;
		return deleted;


	// Replace the return value here as required
}

/** 
	A function to delete the first element of an array,
		provided that the array is not empty.
	@param A address of the array
	@return If the deletion was successful, the value which was deleted.
			If the deletion failed, -1.
*/
double deleteFirst(doubleArray* A) {
	//TODO
	double deleted=A->start[0];
	if(A->length==0){
		return -1;
	}
	else
	for(int j=0;j<A->length;j++){
			(A->start[j])=(A->start[j+1]);
		}
		A->length--;
	return deleted; // Replace the return value here as required
}

/** 
	A function to delete the last element of an array,
		provided that the array is not empty.
	@param A address of the array
	@return If the deletion was successful, the value which was deleted.
			If the deletion failed, -1.
*/
double deleteLast(doubleArray* A) {
	//TODO
	double deleted=A->start[A->length-1];
	if(A->length==0){
		return -1;
	}
	else
	A->length--;
	return deleted; 
	 // Replace the return value here as required
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
	//TODO
	int idx = recFindIndex(A->start,A->length,d1);
	if(idx==-1){
		return -1;
	}
	else
	deleteAt(A,idx);
	 // Replace the return value here as required
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
	//TODO
	char y;
	char z;
	double d,d1,d2;
	do{
		scanf("%c%*c",&y);
		// switch(y){
		// 	case 'i':
		// 		scanf(" %c",&z);
		// 		switch(z){
		// 			case 'a':
						
		// 				scanf("%lf",&d);
		// 				int i;
		// 				scanf("%d",&i);
		// 				insertAt(A,i,d);
		// 				printf("%d\n",insertAt(A,i,d));
		// 				break;
		// 			case 'f':
						
		// 				scanf("%lf",&d);
		// 				insertFirst(A,d);
		// 				printf("%d\n",insertFirst(A,d));
		// 				break;
		// 			case 'l':
						
		// 				scanf("%lf",&d);
		// 				insertLast(A,d);
		// 				printf("%d\n",insertLast(A,d));
		// 				break;
		// 			case 'b':
		// 				scanf("%lf %lf",&d1,&d2);
		// 				insertBefore(A,d1,d2);
		// 				printf("%d\n",insertBefore(A,d1,d2));
		// 				break;
		// 			default:
		// 			break;
		// 		}
		// 	case 'p':
		// 		printArray(A);
		// 		break;
		// 	default:
		// 	break;
		// }
		if(y=='i'){
			scanf("%c%*c",&z);
			if(z=='a'){
				d=0;
				int i;
				scanf("%d%*c",&i);
				scanf("%lf%*c",&d);
				int idx = insertAt(A,i,d);
				printf("%d\n",idx);
				
			}
			else if(z=='f'){
				double d=0;
				scanf("%lf%*c",&d);
				int idx =insertFirst(A,d);
				printf("%d\n",idx);
				
			}
			else if(z=='l'){
				double d=0;
				scanf("%lf%*c",&d);
				int idx = insertLast(A,d);
				printf("%d\n",idx);
				
			}
			else if(z=='b'){
				double d1=0;
				double d2=0;
				scanf("%lf%*c %lf%*c",&d1,&d2);
				int idx = insertBefore(A,d1,d2);
				printf("%d\n",idx);
				continue;
			}
			else
			break;
			
		}
		else if(y=='p'){
			printArray(A);
		}
		else if(y=='d'){
			scanf("%c%*c",&z);
			if(z=='a'){
				d=0;
				int i;
				scanf("%d%*c",&i);
				float val = deleteAt(A,i);
				if(val==-1){
					printf("%d\n",(int)val);
				}
				else{
				printf("%.2lf\n",val);
				}
				continue;
			}
			else if(z=='f'){
				double val =deleteFirst(A);
				if(val==-1){
					printf("%d\n",(int)val);
				}
				else{
				printf("%.2lf\n",val);
				}
				continue;
			}
			else if(z=='l'){
				double val = deleteLast(A);
				if(val==-1){
					printf("%d\n",(int)val);
				}
				else{
				printf("%.2lf\n",val);
				}
				continue;
			}
			else if(z=='v'){
				double d=0;
				scanf("%lf%*c",&d);
				double val = deleteValue(A,d);
				if(val==-1){
					printf("%d\n",(int)val);
				}
				else{
				printf("%.2lf\n",val);
				}
				continue;
			}
			else
			break;
			
		}
		else if(y=='f'){
			d=0;
			scanf("%lf%*c",&d);
			int i = recFindIndex(A->start,A->length,d);
			printf("%d\n",i);
			continue;
		}
		else
		break;
		
	}
	while(y!='s');
}