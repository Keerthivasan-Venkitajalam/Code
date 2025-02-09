//C program to find the sum of first ‘n’ natural numbers:
#include <stdio.h>

int sum_natural_numbers(int n) {
    if(n == 0)
        return 0;
    else
        return n + sum_natural_numbers(n - 1);
}

int main() {
    int num;
    printf("Enter a positive integer: ");
    scanf("%d", &num);
    printf("Sum of first %d natural numbers = %d\n", num, sum_natural_numbers(num));
    return 0;
}
