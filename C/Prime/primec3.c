//C program to find all the prime numbers from 0 to user entered number
#include <stdio.h>
#include <math.h>

int main() {
    int num, i, j;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Prime numbers from 0 to %d are: ", num);
    for(i = 2; i <= num; i++) {
        int isPrime = 1;
        for(j = 2; j <= sqrt(i); j++) {
            if(i % j == 0) {
                isPrime = 0;
                break;
            }
        }
        if(isPrime) {
            printf("%d ", i);
        }
    }
    return 0;
}
