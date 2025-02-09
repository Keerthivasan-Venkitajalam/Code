//C program to find whether the user entered number is a prime number if not a prime number print all its factors
#include <stdio.h>

int main() {
    int num, i, isPrime = 1;

    printf("Enter a number: ");
    scanf("%d", &num);

    for(i = 2; i <= num/2; ++i) {
        if(num % i == 0) {
            isPrime = 0;
            break;
        }
    }

    if (isPrime == 1)
        printf("%d is a prime number.", num);
    else {
        printf("%d is not a prime number.\n", num);
        printf("Factors of %d are: ", num);
        for(i = 1; i <= num; ++i) {
            if(num % i == 0)
                printf("%d ", i);
        }
    }

    return 0;
}
