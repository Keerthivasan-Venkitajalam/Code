//To find the sum of n natural numbers

#include <stdio.h>
int sum_n(int n);
int sum_n_var(int n);

int main() {
    int number, result;

    printf("Enter a positive integer: ");
    scanf("%d", &number);

    result = sum_n(number);

    printf("sum = %d", result);
    return 0;
}

int sum_n(int n) {
    if (n != 0)
        // sum() function calls itself
        return n + sum_n(n-1); 
    else
        return n;
}

int sum_n_var(int n) {
    if (n == 1)
    { return 1;}

    int sum_n=n+sum_n_var(n-1);
    return sum_n;
}