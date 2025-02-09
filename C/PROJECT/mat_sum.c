#include "MatOpsss.h"
#include <stdio.h>

main()
{
    int n, m;
    printf("Enter number of rows and columns: ");
    scanf("%i%i", &n, &m);
    float a[n][m], b[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("Element A[%d,%d]: ", i + 1, j + 1);
            scanf("%f", &a[i][j]);
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("Element B[%d,%d]: ", i + 1, j + 1);
            scanf("%f", &b[i][j]);
        }
    }
    MatrixSum(&a[0][0], &b[0][0], n, m);
}
