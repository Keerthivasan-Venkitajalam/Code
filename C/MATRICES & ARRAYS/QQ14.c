//C program to check if a user input array is a sequence
#include<stdio.h>
#define SIZE 100

int main()
{
    int a[SIZE], i, n, is_sequence = 1;

    printf("Enter size of the array : ");
    scanf("%d", &n);

    printf("Enter elements in array : ");
    for(i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }

    for(i=0; i<n-1; i++)
    {
        if(a[i] != a[i+1] - 1)
        {
            is_sequence = 0;
            break;
        }
    }

    if(is_sequence)
    {
        printf("\nThe array is a sequence.");
    }
    else
    {
        printf("\nThe array is not a sequence.");
    }

    return 0;
}
