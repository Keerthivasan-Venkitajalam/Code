//C program to find if a position in 2 matrices has the same element in the same position
#include<stdio.h>
#define SIZE 100

int main()
{
    int a[SIZE][SIZE], b[SIZE][SIZE], i, j, m, n, p, q, pos_i, pos_j;

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

    printf("Enter number of rows and columns of second matrix : ");
    scanf("%d %d", &p, &q);

    printf("Enter elements in second matrix : ");
    for(i=0; i<p; i++)
    {
        for(j=0; j<q; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }

    printf("Enter the position (i, j) : ");
    scanf("%d %d", &pos_i, &pos_j);

    if(pos_i < m && pos_j < n && pos_i < p && pos_j < q)
    {
        if(a[pos_i][pos_j] == b[pos_i][pos_j])
        {
            printf("\nBoth matrices have the same element at the given position.");
        }
        else
        {
            printf("\nBoth matrices do not have the same element at the given position.");
        }
    }
    else
    {
        printf("\nInvalid position!");
    }

    return 0;
}
