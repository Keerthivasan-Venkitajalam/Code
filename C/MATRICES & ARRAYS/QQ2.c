//C program to find the Sum of 2 arrays
#include<stdio.h>

int main()
{
    int a[30], b[30], sum[30];
    int i, n;

    printf("Enter size of the array : ");
    scanf("%d", &n);

    printf("Enter elements in first array : ");
    for(i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter elements in second array : ");
    for(i=0; i<n; i++)
    {
        scanf("%d", &b[i]);
    }

    for(i=0; i<n; i++)
    {
        sum[i] = a[i] + b[i];
    }

    printf("\nSum of two arrays is : ");
    for(i=0; i<n; i++)
    {
        printf("%d ", sum[i]);
    }

    return 0;
}
