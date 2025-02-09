//C program to find product of two matrices
#include<stdio.h>
#define SIZE 100

int main()
{
    int a[SIZE][SIZE], b[SIZE][SIZE], product[SIZE][SIZE], i, j, k, m, n, p;

    printf("Enter number of rows and columns of first matrix : ");
    scanf("%d %d", &m, &n);

    printf("Enter elements in first matrix : ");
    for(i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter number of columns of second matrix : ");
    scanf("%d", &p);

    printf("Enter elements in second matrix : ");
    for(i=0; i<n; i++)
    {
        for(j=0; j<p; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }

    for(i=0; i<m; i++)
    {
        for(j=0; j<p; j++)
        {
            product[i][j] = 0;
            for(k=0; k<n; k++)
            {
                product[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    printf("\nProduct of two matrices is: ");
    for(i=0; i<m; i++)
    {
        printf("\n");
        for(j=0; j<p; j++)
        {
            printf("%d ", product[i][j]);
        }
    }

    return 0;
}
