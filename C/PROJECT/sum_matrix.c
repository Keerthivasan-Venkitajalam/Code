#include <stdio.h>

main()
{
    int m, n;
    printf("Enter numbers of rows and columns: ");
    scanf("%i%i", &m, &n);
    int a[m][n], b[m][n], c[m][n];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("Element %d row %d column %d of matrix A: ", (i * j + 1), i + 1, j + 1);
            scanf("%i", &a[i][j]);
        }
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("Element %d row %d column %d of matrix B: ", (i * j + 1), i + 1, j + 1);
            scanf("%i", &b[i][j]);
        }
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%i ", a[i][j] + b[i][j]);
        }
        printf("\n");
    }
}