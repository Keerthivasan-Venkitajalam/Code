//C program to sort the entered array in ascending and descending order
#include<stdio.h>
#define SIZE 100

void sort(int a[], int n)
{
    int i, j, temp;
    for(i=0; i<n-1; i++)
    {
        for(j=0; j<n-i-1; j++)
        {
            if(a[j] > a[j+1])
            {
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
}

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

    sort(a, n);

    printf("\nArray in ascending order: ");
    for(i=0; i<n; i++)
    {
        printf("%d ", a[i]);
    }

    printf("\nArray in descending order: ");
    for(i=n-1; i>=0; i--)
    {
        printf("%d ", a[i]);
    }

    return 0;
}
