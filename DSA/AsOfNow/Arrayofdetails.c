#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int Rollno;
    float CGPA;
    char Gender;
    int Age;
} student;

int main() {
    int n, i;
    printf("Enter the number of students: ");
    scanf("%d", &n);

    student* students = (student*)malloc(n * sizeof(student));

    for(i = 0; i < n; i++) {
        printf("\nEnter details for student %d:\n", i+1);
        printf("Enter the roll number: ");
        scanf("%d", &(students[i].Rollno));

        printf("Enter the gender (M/F): ");
        scanf(" %c", &(students[i].Gender));

        printf("Enter the CGPA: ");
        scanf("%f", &(students[i].CGPA));

        printf("Enter the age: ");
        scanf("%d", &(students[i].Age));
    }

    printf("\nStudent Details:\n");
    for(i = 0; i < n; i++) {
        printf("\nStudent %d:\n", i+1);
        printf("Roll Number: %d\n", students[i].Rollno);
        printf("Gender: %c\n", students[i].Gender);
        printf("CGPA: %.2f\n", students[i].CGPA);
        printf("Age: %d\n", students[i].Age);
    }

    free(students);

    return 0;
}
