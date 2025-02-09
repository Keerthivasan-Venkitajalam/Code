//C program to find the average of n numbers in an array
#include<stdio.h>
#define SIZE 100

int main()
{
    int a[SIZE], i, n;
    float sum = 0.0, avg;

    printf("Enter size of the array : ");
    scanf("%d", &n);

    printf("Enter elements in array : ");
    for(i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
        sum += a[i];
    }

    avg = sum / n;
    printf("Average = %.2f", avg);

    return 0;
}
