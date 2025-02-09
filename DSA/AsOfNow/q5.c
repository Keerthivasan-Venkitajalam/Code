#include <stdio.h>

int isPrime(int num) {
    int i;
    if(num < 2) return 0;
    for(i = 2; i <= num/2; ++i) {
        if(num % i == 0) {
            return 0;
        }
    }
    return 1;
}

int main() {
    int n, i;
    printf("Enter a positive integer greater than 1: ");
    scanf("%d", &n);
    
    printf("Prime numbers less than or equal to %d are: ", n);
    for(i = n; i >= 2; i--) {
        if(isPrime(i)) {
            printf("%d ", i);
        }
    }

    return 0;
}
