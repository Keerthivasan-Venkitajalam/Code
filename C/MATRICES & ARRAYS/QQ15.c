//C program to get a m*n matrix from user and display that in 2D array
#include<stdio.h>
#define SIZE 100

int main()
{
    int a[SIZE][SIZE], i, j, m, n;

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

    printf("\nMatrix is: ");
    for(i=0; i<m; i++)
    {
        printf("\n");
        for(j=0; j<n; j++)
        {
            printf("%d ", a[i][j]);
        }
    }

    return 0;
}
