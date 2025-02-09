//C program to find transpose of the matrix
#include<stdio.h>
#define SIZE 100

int main()
{
    int a[SIZE][SIZE], transpose[SIZE][SIZE], i, j, m, n;

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

    for(i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
        {
            transpose[j][i] = a[i][j];
        }
    }

    printf("\nTranspose of the matrix is: ");
    for(i=0; i<n; i++)
    {
        printf("\n");
        for(j=0; j<m; j++)
        {
            printf("%d ", transpose[i][j]);
        }
    }

    return 0;
}
