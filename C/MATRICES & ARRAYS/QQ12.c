//C program to find and print all the prime numbers in an array. Also print the number of primes
#include<stdio.h>
#define SIZE 100

int is_prime(int n)
{
    int i;
    if(n <= 1)
    {
        return 0;
    }
    for(i=2; i*i<=n; i++)
    {
        if(n%i == 0)
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    int a[SIZE], i, n, count = 0;

    printf("Enter size of the array : ");
    scanf("%d", &n);

    printf("Enter elements in array : ");
    for(i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("\nPrime numbers in array are: ");
    for(i=0; i<n; i++)
    {
        if(is_prime(a[i]))
        {
            printf("%d ", a[i]);
            count++;
        }
    }

    printf("\nNumber of primes: %d", count);

    return 0;
}
