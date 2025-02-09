//C program to find the missing numbers in an array in the range [1, n]
#include<stdio.h>
#define SIZE 100

int main()
{
    int a[SIZE], i, j, n, found;

    printf("Enter size of the array : ");
    scanf("%d", &n);

    printf("Enter elements in array : ");
    for(i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("\nMissing numbers are: ");
    for(i=1; i<=n; i++)
    {
        found = 0;
        for(j=0; j<n; j++)
        {
            if(a[j] == i)
            {
                found = 1;
                break;
            }
        }

        if(found == 0)
        {
            printf("%d ", i);
        }
    }

    return 0;
}
