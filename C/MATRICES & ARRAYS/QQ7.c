//C program to find the nth largest and nth smallest number in the array
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
    int a[SIZE], i, n, nth;

    printf("Enter size of the array : ");
    scanf("%d", &n);

    printf("Enter elements in array : ");
    for(i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }

    sort(a, n);

    printf("Enter the value of n : ");
    scanf("%d", &nth);

    printf("\n%dth smallest element: %d", nth, a[nth-1]);
    printf("\n%dth largest element: %d", nth, a[n-nth]);

    return 0;
}
