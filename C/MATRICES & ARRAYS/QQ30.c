//C program to calculate the sum of array elements by passing a function
#include<stdio.h>


int sum_of_elements(int a[], int n)
{
    int sum = 0, i;
    for(i=0; i<n; i++)
    {
        sum += a[i];
    }
    return sum;
}

int main()
{
    int a[20], i, n, sum;

    printf("Enter size of the array : ");
    scanf("%d", &n);

    printf("Enter elements in array : ");
    for(i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }

    sum = sum_of_elements(a, n);

    printf("\nSum of all elements: %d", sum);

    return 0;
}
