//C program to separately print the odd and even numbers in an array
#include<stdio.h>
#define SIZE 100

int main()
{
    int a[SIZE], i, n;

    printf("Enter size of the array : ");
    scanf("%d", &n);

    printf("Enter elements in array : ");
    for(i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("\nEven numbers in array are: ");
    for(i=0; i<n; i++)
    {
        if(a[i]%2 == 0)
        {
            printf("%d ", a[i]);
        }
    }

    printf("\nOdd numbers in array are: ");
    for(i=0; i<n; i++)
    {
        if(a[i]%2 != 0)
        {
            printf("%d ", a[i]);
        }
    }

    return 0;
}
