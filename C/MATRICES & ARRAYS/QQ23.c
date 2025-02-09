//C program to find the even numbers in each row and column of the matrix
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

    printf("\nEven numbers in each row: ");
    for(i=0; i<m; i++)
    {
        printf("\nRow %d: ", i+1);
        for(j=0; j<n; j++)
        {
            if(a[i][j] % 2 == 0)
            {
                printf("%d ", a[i][j]);
            }
        }
    }

    printf("\nEven numbers in each column: ");
    for(i=0; i<n; i++)
    {
        printf("\nColumn %d: ", i+1);
        for(j=0; j<m; j++)
        {
            if(a[j][i] % 2 == 0)
            {
                printf("%d ", a[j][i]);
            }
        }
    }

    return 0;
}
