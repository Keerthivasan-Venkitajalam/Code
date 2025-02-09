//C program to sum two matrices A and B
#include<stdio.h>
#define SIZE 100

int main()
{
    int a[SIZE][SIZE], b[SIZE][SIZE], sum[SIZE][SIZE], i, j, m, n;

    printf("Enter number of rows : ");
    scanf("%d", &m);

    printf("Enter number of columns : ");
    scanf("%d", &n);

    printf("Enter elements in first matrix : ");
    for(i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter elements in second matrix : ");
    for(i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }

    for(i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
        {
            sum[i][j] = a[i][j] + b[i][j];
        }
    }

    printf("\nSum of two matrices is: ");
    for(i=0; i<m; i++)
    {
        printf("\n");
        for(j=0; j<n; j++)
        {
            printf("%d ", sum[i][j]);
        }
    }

    return 0;
}
