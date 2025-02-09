#include <stdio.h>

main()
{
    int n, m, diagSum = 0, antiDiagSum = 0;
    printf("Enter number of rows and columns: ");
    scanf("%i%i", &n, &m);
    int a[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("Enter the element (%i,%i) of the array: ", i + 1, j + 1);
            scanf("%i", &a[i][j]);
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("%i ", a[i][j]);
        }
        printf("\n");
    }
    for (int i = 0; i < n; i++)
    {
        int rowSum = 0;
        for (int j = 0; j < m; j++)
        {
            rowSum += a[i][j];
        }
        printf("Sum of row %i: %i\n", (i + 1), rowSum);
    }
    for (int j = 0; j < m; j++)
    {
        int colSum = 0;
        for (int i = 0; i < n; i++)
        {
            colSum += a[i][j];
        }
        printf("Sum of column %i: %i\n", (j + 1), colSum);
    }
    if (n == m)
    {
        for (int i = 0; i < n; i++)
        {
            diagSum += a[i][i];
            antiDiagSum += a[n - i - 1][i];
        }
        printf("Sum of diagonal: %i\n", diagSum);
        printf("Sum of anti-diagonal: %i\n", antiDiagSum);
    }
}