//C program to find user entered matrix is symmetric or not
#include<stdio.h>
#define SIZE 100

int main()
{
    int a[SIZE][SIZE], i, j, n, is_symmetric = 1;

    printf("Enter number of rows and columns : ");
    scanf("%d", &n);

    printf("Enter elements in matrix : ");
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            if(a[i][j] != a[j][i])
            {
                is_symmetric = 0;
                break;
            }
        }
    }

    if(is_symmetric)
    {
        printf("\nThe matrix is symmetric.");
    }
    else
    {
        printf("\nThe matrix is not symmetric.");
    }

    return 0;
}
