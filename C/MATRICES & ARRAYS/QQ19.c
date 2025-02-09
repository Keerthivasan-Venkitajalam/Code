//C program to find the sum of diagonal elements of a square matrix
#include<stdio.h>
#define SIZE 100

int main()
{
    int a[SIZE][SIZE], i, j, n, sum = 0;

    printf("Enter number of rows and columns : ");
    scanf("%d", &n);

    printf("Enter elements in matrix : ");
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            scanf("%d", &a[i][j]);
            if(i == j)
            {
                sum += a[i][j];
            }
        }
    }

    printf("\nSum of diagonal elements: %d", sum);

    return 0;
}
