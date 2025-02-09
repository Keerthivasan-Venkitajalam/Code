#include <stdio.h>

main()
{
    int m, n, x, y;
    printf("Enter numbers of rows and columns of first matrix: ");
    scanf("%i%i", &m, &n);
    printf("Enter numbers of rows and columns of second matrix: ");
    scanf("%i%i", &x, &y);
    int a[m][n], b[x][y];
    if (n == x)
    {
        int c[m][y];
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                printf("Element %d row %d column %d of matrix A: ", (i * j + 1), i + 1, j + 1);
                scanf("%i", &a[i][j]);
            }
        }
        for (int i = 0; i < x; i++)
        {
            for (int j = 0; j < y; j++)
            {
                printf("Element %d row %d column %d of matrix B: ", (i * j + 1), i + 1, j + 1);
                scanf("%i", &b[i][j]);
            }
        }
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < y; j++)
            {
                int sum = 0;
                for (int k = 0; k < n; k++)
                {
                    sum += a[i][k] * b[k][j];
                }
                c[i][j] = sum;
            }
        }
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < y; j++)
            {
                printf("%i ", c[i][j]);
            }
            printf("\n");
        }
    }
    else
    {
        printf("Matrices cannot be multiplied. ");
    }
}