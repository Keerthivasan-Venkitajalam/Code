//C program to find the sum of all elements in a matrix
#include<stdio.h>
#define SIZE 100

int main()
{
    int a[SIZE][SIZE], i, j, m, n, sum = 0;

    printf("Enter number of rows : ");
    scanf("%d", &m);

    printf("Enter number of columns : ");
    scanf("%d", &n);

    printf("Enter elements in matrix : ");
    for(i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
        {
            scanf("%d", &a[i][j]);
            sum += a[i][j];
        }
    }

    printf("\nSum of all elements: %d", sum);

    return 0;
}
