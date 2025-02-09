//C program to find whether the user entered number is prime or not
#include <stdio.h>
#include <math.h>

int main() {
    int n, i, isPrime = 1;
    printf("Enter a nber: ");
    scanf("%d", &n);
    for(i = 2; i <= sqrt(n); ++i) {
        if(n % i == 0) {
            printf("%d is not a prime number.", n);
            isPrime = 0;
            break;
        }
    }
    if(isPrime && n > 1) {
        printf("%d is a prime number.", n);
    } else if(n == 1 || n == 0) {
        printf("%d is not a prime number.", n);
    }
    return 0;
}