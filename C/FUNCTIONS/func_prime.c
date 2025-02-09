//Write a C program to find whether the user entered number is prime or not and if prime then find the factorials else find the factors of the number 
//use user defined functions to find factors, factorials and to check prime
#include <stdio.h>

int checkPrime(int n) {
    int i, flag = 1;
    for(i = 2; i <= n/2; ++i) {
        if(n%i == 0) {
            flag = 0;
            break;
        }
    }
    return flag;
}

int facto(int n) {
    if(n == 0)
        return 1;
    else
        return n*facto(n-1);
}

void printFactors(int n) {
    int i;
    printf("Factors of %d are: ", n);
    for(i=1; i<=n;++i) {
        if (n%i == 0)
            printf("%d ", i);

    }
}

int main() {
    int num;
    printf("Enter a positive integer: ");
    scanf("%d",&num);

    if(checkPrime(num)) {
        printf("%d is a prime number.\n", num);
        printf("Factorial of %d = %d", num, facto(num));
    } else {
        printf("%d is not a prime number.\n", num);
        printFactors(num);
    }

    return 0;
}
