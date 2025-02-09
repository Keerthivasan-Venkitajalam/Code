#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Function to initialize an array of size n with -1
int* initArray(int n) {
	int* A = (int*)malloc(n * sizeof(int));
	for (int i=0;i<n;++i){
        A[i]=-1;
    }
	return A;
}

// Function to read an array from standard input
void readArray(int* A, int n) {
	for (int i = 0; i < n; i++) {
        scanf("%d", &A[i]);
    }
}

// Function to print an array to standard output
void printArray(int* A, int n) {
	for (int i = 0; i < n; i++) {
        printf("%d ", A[i]);
    }
    printf("\n");
}

// Function to find the index of the minimum element in an array
int minIndex(int* A, int n) {
	int min = A[0];
	int index = 0;
	for (int i = 0; i < n; i++){
		if (A[i] < min){
			min = A[i];
			index = i;
		}
	}
	return index; 
}

// Function to swap the first element of an array with its minimum element
void modifyArray(int* A, int n) {
	int index = minIndex(A, n);
	int temp = A[0];
	A[0] = A[index];
	A[index] = temp;
}

// Function to set elements of an array based on user input
void setArray(int* A, int n) {
	int p;
	scanf("%d", &p);
	while (p != -1){
		int i = p%n;
		if (A[i] == -1){
			A[i] = p;
		}
		else{
			A[i] += p;
		}
		scanf("%d", &p);
	}
}

// Function to find the first index where the next element is smaller
int findIndex(int* A, int n) {
	int index = 0;
	for (int i = 0; i < n-1; i++){
		if (A[i] > A[i+1]){
			index = i;
			break;
		}
	}
	return index; 
}

// Function to sort an array using bubble sort
void swapArray(int* A, int n, int i) {
	int temp;
	for (int j = i+1; j > 0; j--){
		if (A[j] < A[j-1]){
			temp = A[j];
			A[j] = A[j-1];
			A[j-1] = temp;
		}
	}
}

// Function to shrink an array by removing elements greater than their neighbors
void shrinkArray(int* A, int n) {
	int round = 1;
	while(round > 0)
	{
		round = 0;
		for(int i = 0; i < n; i++)
		{
        	if(i == 0)
			{
				if(*(A+i) > *(A+i+1))
				{
					for(int j=i;j<n;j++)
					{
						*(A + j) =*(A + j + 1);					
					}
					n--;
					i--;
					round++;
				}	
			}	
			else if((*(A + i) > *(A + i + 1)) && (*(A + i) > *(A + i - 1)) && ( i != n-1))
			{
            	for(int j=i;j<n;j++)
				{
					*(A + j) =*(A + j + 1);						
				}
				n--;
				i--;
			    round++;
			}
			if(i==n-1 && i!=0)
			{
				if(*(A + i) > *(A + i - 1))
				{
					n--;
					i--;
					round++;
				}
			}			      
		}
		printArray(A,n);
	}
}

// Function to arrange elements of an array around a pivot
void arrangeArray(int* A, int n, int p) {
    int* leftArr = malloc(n * sizeof(int));
    int* rightArr = malloc(n * sizeof(int));
    int leftIndex = 0;
    int rightIndex = 0;
    
    for (int i = 0; i < n; i++) {
        if (A[i] < p) {
            leftArr[leftIndex++] = A[i];
        } else if (A[i] > p) {
            rightArr[rightIndex++] = A[i];
        }
    }

    
    for (int i = 0; i < leftIndex; i++) {
        A[i] = leftArr[i];
    }
    A[leftIndex] = p;
    for (int i = 0; i < rightIndex; i++) {
        A[leftIndex + 1 + i] = rightArr[i];
    }

    free(leftArr);
    free(rightArr);
    leftArr=NULL;
    rightArr=NULL;
}

// Function to combine two arrays into one in descending order
int* combineArray(int* A, int n, int* B, int m) { 
	int *C = (int *)malloc(sizeof(int) * (n + m));
    int i = n - 1;
    int j = m - 1;
    int k = 0;
    while (i >= 0 && j >= 0) {
        if (A[i] > B[j]) {
            printf("A ");
            C[k] = A[i];
            i--;
        } else {
            printf("B ");
            C[k] = B[j];
            j--;
        }
        k++;
    }
    while (i >= 0) {
        printf("A ");
        C[k] = A[i];
        i--;
        k++;
    }
    while (j >= 0) {
        printf("B ");
        C[k] = B[j];
        j--;
        k++;
    }
    return C; 
}

// Function to read student data into an array
void readStudents(int* A, int n) {
	readArray(A, n);
}

// Function to print student data from an array
void printStudents(int* A, int n) {
    if (n == 0) {
        printf("-1");
    } else {
        printArray(A, n);
    }
}

// Function to combine student data from two arrays into one
int speechStudents(int* A, int n, int* B, int m, int* C) {
	int i = 0; 
    int j = 0; 
    int k = 0; 	
	while (i < n){
		C[k] = A[i];
		i++;
		k++;
	}
	while (j < m){
		C[k] = B[j];
		j++;
		k++;
	}
	int l = 0;
	for (int i = 0; i < k; i++) {
		int flag = 0;
		for (int j = 0; j < l; j++) {
			if (C[i] == C[j]) {
				flag = 1;
				break;
			}
		}
		if (flag == 0) {
			C[l] = C[i];
			l++;
		}
	}
	return l; 
}

// Function to find the count of students in B who are not in A
int debateStudents(int* A, int n, int* B, int m, int* C) {
	int count = 0;
    for(int i = 0; i < m; i++) {
        int j;
        for(j = 0; j < n; j++) {
            if(B[i] == A[j]) {
                break;
            }
        }
        if(j == n) {
            C[count++] = B[i]; // If student from B is not in A, add to C
        }
    }
	return count; // Return the count of such students
}

// Function to read a string of length n from standard input
char* readString(int n) {
	char* str = (char*)malloc((n+1)*sizeof(char));
	fgets(str, n+1, stdin);
	str[strcspn(str, "\n")] = '\0'; // Remove the newline character at the end
	return str; 
}

// Function to count the occurrences of a character in a string
int countChar(char* str, char ch) {
	int c = 0;
	for (int i = 0; str[i] != '\0'; i++) {
		if (str[i] == ch) {
			c++; // Increment count if character is found
		}
	}
	return c; 
}

// Function to count the occurrence of a word in a string
int countWord(char* str, char* w) {
	int count = 0;
    char* token = strtok(str, " ");
    while (token != NULL) {
        if (strcmp(token, w) == 0) {
            count++;
        }
        token = strtok(NULL, " ");
    }
   return count;
}