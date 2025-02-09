/* 
 * This is a sample code to store and print the student details using structure pointer.
 * Follow this for reading and writing data in Assignment 2.
 * Do not use fflush() as it is not supported in LINUX platforms.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* structure definitions are usually done globally so that all functions can access the newly defined structure datatype */ 
typedef struct {
    int rollNumber;
    char* name; // to store the starting address of name
	char gender;
	int courseCount;
	int* marks; // to store the starting address of the marks array
    float cgpa;
} student;

int main()
{
	student* S = (student*) malloc(sizeof(student)); // structure pointer variable

	printf("Enter the Roll Number: ");
	scanf("%d%*c", &(S->rollNumber));  // Read an integer and, then read and discard the next character (newline here).

	printf("Enter the Name: ");
	/* before reading the name, allocate enough memory to store the name. */ 
	S->name = malloc(50 * sizeof(char));
	scanf("%[^\n]%*c", S->name);  // Read a string of characters until a newline ('\n') and, then read and discard the newline.

	printf("Enter the Gender: ");
	scanf("%c%*c", &(S->gender)); // Read a character and, then read and discard the next character (newline here).

	printf("Enter the number of Courses: ");
	scanf("%d%*c", &(S->courseCount)); // Read an integer and, then read and discard the next character (newline here).

	printf("Enter the Marks: ");
	/* before reading the marks, allocate enough memory to store the marks. */ 
	S->marks = malloc(S->courseCount * sizeof(int));
	for (int i = 0; i < S->courseCount; i++) {
		scanf("%d%*c", (S->marks)+i); // Read an integer and, then read and discard the next character (space or newline).
		// Note that, (S->marks)+i is the same as &(S->marks[i]). (Why?)
		// Because, S->marks is the starting address of the marks array, and (S->marks)+i gives the address of ith element in the array.
	}
	
	printf("Enter the CGPA: ");
	scanf("%f%*c", &(S->cgpa)); // Read an floating point value and, then read and discard the next character (newline here).

	printf("Student Details:\n");
	printf("----------------\n");
	/* Note that, to print only two decimal points of a floating point value, you can use %.2f as the specifier. */ 
	printf("Roll Number: %d, Name: %s, Gender: %c, CGPA: %.2f\n", S->rollNumber, S->name, S->gender, S->cgpa);
	printf("Marks: ");
	for (int i = 0; i < S->courseCount; i++) {
		printf("%d ", S->marks[i]);
	}
	printf("\n");

	return 0;
}
