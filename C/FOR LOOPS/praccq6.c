//C program to find the factorial of a number "n"
#include <stdio.h>
unsigned long long factorial(int n) {
    if (n == 0)
        return 1;
    else
        return n * factorial(n - 1);
}
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Factorial of %d = %llu", num, factorial(num));
    return 0;
}
