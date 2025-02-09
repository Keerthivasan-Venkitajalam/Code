#include <stdio.h>

main()
{
    int n, m;
    printf("Enter number of rows and columns: ");
    scanf("%i%i", &n, &m);
    int a[n][m], aT[m][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("Enter the element (%i,%i) of the array: ", i + 1, j + 1);
            scanf("%i", &a[i][j]);
            aT[j][i] = a[i][j];
        }
    }
    printf("Matrix:\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("%i ", a[i][j]);
        }
        printf("\n");
    }
    printf("Transpose:\n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%i ", aT[i][j]);
        }
        printf("\n");
    }
}