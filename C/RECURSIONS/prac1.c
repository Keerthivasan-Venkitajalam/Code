//C program to find the sum of first 'n' natural numbers(use recursive function)
#include<stdio.h>
int sum(int n) {
    if(n == 0)
        return 0;
    else
        return sum(n-1) + n;
}
int main() {
    int num;
    printf("Enter a positive integer: ");
    scanf("%d", &num);
    printf("Sum = %d", sum(num));
    return 0;
}
