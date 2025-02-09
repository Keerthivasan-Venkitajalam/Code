//C program to reverse the array and print it
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

    printf("\nArray in reverse order: ");
    for(i=n-1; i>=0; i--)
    {
        printf("%d ", a[i]);
    }

    return 0;
}
