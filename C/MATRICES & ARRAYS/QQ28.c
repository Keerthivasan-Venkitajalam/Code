#include<stdio.h>
#define MAX 100

int calculate_determinant(int matrix[MAX][MAX], int size)
{
    int det = 0, submatrix[MAX][MAX], i, j, k;
    if(size == 2)
    {
        return ((matrix[0][0] * matrix[1][1]) - (matrix[1][0] * matrix[0][1]));
    }
    else
    {
        for(i=0; i<size; i++)
        {
            int x = 0, y = 0;
            for(j=0; j<size; j++)
            {
                for(k=0; k<size; k++)
                {
                    if(j != 0 && k != i)
                    {
                        submatrix[x][y] = matrix[j][k];
                        y++;
                        if(y == size - 1)
                        {
                            y = 0;
                            x++;
                        }
                    }
                }
            }
            det = det + (matrix[0][i] * pow(-1, i) * calculate_determinant(submatrix, size - 1));
        }
    }
    return det;
}

int main()
{
    int matrix[MAX][MAX], i, j, size, det;

    printf("Enter the size of the matrix : ");
    scanf("%d", &size);

    printf("Enter the elements in the matrix : ");
    for(i=0; i<size; i++)
    {
        for(j=0; j<size; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    det = calculate_determinant(matrix, size);

    if(det != 0)
    {
        printf("\nThe matrix is invertible.");
    }
    else
    {
        printf("\nThe matrix is not invertible.");
    }

    return 0;
}
