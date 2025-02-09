//C program find the quotient and remainder of two integers entered by user
#include <stdio.h>

int main() {
    int num1, num2, quotient, remainder;
    printf("Enter x: ");
    scanf("%d", &num1);
    printf("Enter y: ");
    scanf("%d", &num2);
    quotient = num1 / num2;
    remainder = num1 % num2;

    printf("Quotient = %d\n", quotient);
    printf("Remainder = %d\n", remainder);
    
    return 0;
}
