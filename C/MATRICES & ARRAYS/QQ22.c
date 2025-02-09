//C program to find the sum of all elements in each row and column of a user input matrix
#include<stdio.h>
#define SIZE 100

int main()
{
    int a[SIZE][SIZE], i, j, m, n, row_sum, col_sum;

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
        }
    }

    printf("\nSum of elements in each row: ");
    for(i=0; i<m; i++)
    {
        row_sum = 0;
        for(j=0; j<n; j++)
        {
            row_sum += a[i][j];
        }
        printf("\nRow %d: %d", i+1, row_sum);
    }

    printf("\nSum of elements in each column: ");
    for(i=0; i<n; i++)
    {
        col_sum = 0;
        for(j=0; j<m; j++)
        {
            col_sum += a[j][i];
        }
        printf("\nColumn %d: %d", i+1, col_sum);
    }

    return 0;
}
