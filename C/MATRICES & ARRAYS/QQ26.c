//C Program to check whether two matrices are orthogonal or not
#include<stdio.h>
#define SIZE 100

void multiply(int a[SIZE][SIZE], int b[SIZE][SIZE], int result[SIZE][SIZE], int n)
{
    int i, j, k;
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            result[i][j] = 0;
            for(k=0; k<n; k++)
            {
                result[i][j] += a[i][k] * b[k][j];
            }
        }
    }
}

int main()
{
    int a[SIZE][SIZE], b[SIZE][SIZE], result[SIZE][SIZE], i, j, n, is_orthogonal = 1;

    printf("Enter number of rows and columns : ");
    scanf("%d", &n);

    printf("Enter elements in first matrix : ");
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter elements in second matrix : ");
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }

    multiply(a, b, result, n);

    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            if(i == j && result[i][j] != 1)
            {
                is_orthogonal = 0;
                break;
            }
            else if(i != j && result[i][j] != 0)
            {
                is_orthogonal = 0;
                break;
            }
        }
    }

    if(is_orthogonal)
    {
        printf("\nThe matrices are orthogonal.");
    }
    else
    {
        printf("\nThe matrices are not orthogonal.");
    }

    return 0;
}
