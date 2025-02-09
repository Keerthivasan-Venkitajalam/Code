#include <stdio.h>

int main()
{
    int n, m, i, j, sum = 0;
    int mat[10][10];

    printf("Enter the number of rows and columns\n");
    scanf("%d%d", &n, &m);

    printf("Enter the elements of the matrix\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            scanf("%d", &mat[i][j]);
        }
    }

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            sum += mat[i][j];
        }
    }

    printf("The sum of all the elements of the matrix is %d\n", sum);

    return 0;
}