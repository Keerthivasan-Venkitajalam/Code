//C program to find power of any number x^y
#include <stdio.h>
#include <math.h>

int main() {
    int num1, num2, power;
    
    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);
    power=pow(num1,num2);
    printf("%d^%d = %d", num1, num2, power);
    return 0;}

