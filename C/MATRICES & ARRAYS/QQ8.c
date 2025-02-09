//C program to find the largest, second largest and the minimum value in a user input array
#include<stdio.h>
#define SIZE 100

int main()
{
    int a[SIZE], i, n, max, second_max, min;

    printf("Enter size of the array : ");
    scanf("%d", &n);

    printf("Enter elements in array : ");
    for(i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }

    max = second_max = a[0];
    min = a[0];

    for(i=0; i<n; i++)
    {
        if(a[i] > max)
        {
            second_max = max;
            max = a[i];
        }
        else if(a[i] > second_max && a[i] < max)
        {
            second_max = a[i];
        }

        if(a[i] < min)
        {
            min = a[i];
        }
    }

    printf("\nLargest element: %d", max);
    printf("\nSecond largest element: %d", second_max);
    printf("\nMinimum element: %d", min);

    return 0;
}
