#include <stdio.h>
#include <math.h>

int isPrime(int n){
    int i;
    for(i=2;i<=n/2;i++){
        if(n%i==0){
            return 0;
        }
    }
    return 1;
}

int sumOfDigits(int n){
    int sum=0;
    while(n>0){
        sum+=n%10;
        n/=10;
    }
    return sum;
}



int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    int sum = sumOfDigits(n);
    printf("Sum of digits: %d\n", sum);

    printf("Prime numbers up to %d are: ", sum);
    for (int i = 2; i <= sum; i++) {
        if (isPrime(i)) 
        printf("%d ", i);
    }

    return 0;
}