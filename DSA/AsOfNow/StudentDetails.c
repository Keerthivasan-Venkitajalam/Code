#include <stdio.h>

typedef struct {
    int Rollnumber;
    float CGPA;
    char Gender;
    int Age;
    char Name[50]; // Assuming the name won't exceed 50 characters
} student;

int main() {
    student S1;

    printf("Enter the roll number: ");
    scanf("%d", &S1.Rollnumber);

    printf("Enter the gender (M/F): ");
    scanf(" %c", &S1.Gender); 

    printf("Enter the CGPA: ");
    scanf("%f", &S1.CGPA);

    printf("Enter the age: ");
    scanf("%d", &S1.Age);

    printf("Enter the name: ");
    scanf("%s", S1.Name); 

    printf("\nStudent Details:\n");
    printf("Roll Number: %d\n", S1.Rollnumber);
    printf("Gender: %c\n", S1.Gender);
    printf("CGPA: %.2f\n", S1.CGPA);
    fflush (stdin); 
    printf("Age: %d\n", S1.Age);
    printf("Name: %s\n", S1.Name); 

    return 0;
}
