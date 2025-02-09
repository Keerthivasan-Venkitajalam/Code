//C program to find common elements in a matrix
#include<stdio.h>
#define SIZE 100

int main()
{
    int a[SIZE][SIZE], b[SIZE][SIZE], i, j, m, n, p, q;

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

    printf("\nCommon elements are: ");
    for(i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
        {
            for(p=0; p<m; p++)
            {
                for(q=0; q<n; q++)
                {
                    if(a[i][j] == b[p][q])
                    {
                        printf("%d ", a[i][j]);
                    }
                }
            }
        }
    }

    return 0;
}
