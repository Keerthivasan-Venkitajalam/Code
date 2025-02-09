//Write a C program to find the sum of 2 numbers. Use a user defined functin to find the sum using call by value and call by reference arguments
#include <stdio.h>

int sumByVal(int a, int b) {
    return a + b;
}


void sumByRef(int *a, int *b, int *sum) {
    *sum = *a + *b;
}

int main() {
    int num1, num2, sum;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

   
    sum = sumByVal(num1, num2);
    printf("Sum by value: %d\n", sum);

    
    sumByRef(&num1, &num2, &sum);
    printf("Sum by reference: %d\n", sum);

    return 0;
}
