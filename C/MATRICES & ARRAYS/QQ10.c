//C program to delete a specific number or position in an array
#include<stdio.h>
#define SIZE 100

int main()
{
    int a[SIZE], i, n, pos;

    printf("Enter size of the array : ");
    scanf("%d", &n);

    printf("Enter elements in array : ");
    for(i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter the position to delete : ");
    scanf("%d", &pos);

    if(pos < 0 || pos > n)
    {
        printf("Invalid position! Please enter position between 1 to %d", n);
    }
    else
    {
        for(i=pos-1; i<n-1; i++)
        {
            a[i] = a[i+1];
        }

        n--;

        printf("\nElements of array after delete are : ");
        for(i=0; i<n; i++)
        {
            printf("%d ", a[i]);
        }
    }

    return 0;
}
