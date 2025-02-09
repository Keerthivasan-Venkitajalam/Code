//C program to check whether a number can be expressed as the sum of 2 prime numbers.
//(use user defined functions to find the sum and check whether prime or not)
#include <stdio.h>
int ChPrime(int n) {
int flag=1;
    if (n<=1)
        return 0;
    for (int i = 2; i<n/2; ++i) {
        if (n%i == 0){
        flag=0;
        break;
    }
    }
    return flag;
}
void ChPrimeAndSum(int n) {
    int comp = 0;
    for (int i = 2; i <= n / 2; ++i) {
        if (ChPrime(i)) {
            if (ChPrime(n - i)) {
                printf("%d = %d + %d\n", n, i, n - i);
                comp = 1;
            }
        }
    }
    if (!comp)
        printf("%d cannot be expressed as the sum of two prime numbers.", n);
}

int main() {
    int n;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    ChPrimeAndSum(n);
    return 0;
}

