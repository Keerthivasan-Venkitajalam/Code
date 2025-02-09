//C program to multiply and two floating point numbers entered by the user and display the result
#include <stdio.h>

int main() {
    float num1, num2, pdt;
    printf("Enter two numbers: ");
    scanf("%f %f", &num1, &num2);  
    pdt = num1 * num2;
    printf("Product: %.2f\n", pdt);
    return 0;
}
