//C program to find factorials of 'n' natural numbers(use recursive function)
#include<stdio.h>


int factorial(int n) {
    if(n == 0)
        return 1;
    else
        return(n * factorial(n-1));
}
int main() {
    int i, num;
    printf("Enter a number: ");
    scanf("%d", &num);
    for(i = 1; i <= num; i++) {
        printf("Factorial of %d is %d\n", i, factorial(i));
    }
    return 0;
}