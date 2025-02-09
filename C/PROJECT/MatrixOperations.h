#include <stdio.h>

void MatrixSum(float *a, float *b, int rows, int cols)
{
    for (int i = 0; i < rows; ++i)
    {
        for (int j = 0; j < cols; ++j)
        {
            float element = *(a + i * cols + j) + *(b + i * cols + j);
            printf("%f ", element);
        }
        printf("\n");
    }
}

void MatrixDiff(float *a, float *b, int rows, int cols)
{
    for (int i = 0; i < rows; ++i)
    {
        for (int j = 0; j < cols; ++j)
        {
            float element = *(a + i * cols + j) - *(b + i * cols + j);
            printf("%f ", element);
        }
        printf("\n");
    }
}

void MatrixScalarMult(float *a, float b, int rows, int cols)
{
    for (int i = 0; i < rows; ++i)
    {
        for (int j = 0; j < cols; ++j)
        {
            float element = *(a + i * cols + j) * b;
            printf("%f ", element);
        }
        printf("\n");
    }
}

void MatrixTranspose(float *a, int rows, int cols)
{
    for (int i = 0; i < cols; ++i)
    {
        for (int j = 0; j < rows; ++j)
        {
            float element = *(a + j * cols + i);
            printf("%f ", element);
        }
        printf("\n");
    }
}

float MatrixElementSum(float *a, int rows, int cols)
{
    float sum = 0;
    for (int i = 0; i < rows; ++i)
    {
        for (int j = 0; j < cols; ++j)
        {
            float element = *(a + j * cols + i);
            sum += element;
        }
    }
    return sum;
}

float MatrixRowSum(float *a, int rows, int cols)
{
    float rsumtotal = 0;
    for (int i = 0; i < rows; ++i)
    {
        float rsum = 0;
        for (int j = 0; j < cols; ++j)
        {
            float element = *(a + j * cols + i);
            rsum += element;
        }
        rsumtotal += rsum;
        printf("Row %i Sum: %f\n", i + 1, rsum);
    }
    return rsumtotal;
}

float MatrixColumnSum(float *a, int rows, int cols)
{
    float csumtotal = 0;
    for (int i = 0; i < cols; ++i)
    {
        float csum = 0;
        for (int j = 0; j < rows; ++j)
        {
            float element = *(a + j * cols + i);
            csum += element;
        }
        csumtotal += csum;
        printf("Column %i Sum: %f\n", i + 1, csum);
    }
    return csumtotal;
}

float MatrixDiagonalSum(float *a, int rows, int cols)
{
    if (rows == cols)
    {
        float diagsum = 0;
        for (int i = 0; i < rows; i++)
        {
            diagsum += *(a + cols * i + i);
        }
        return diagsum;
    }
    else
    {
        printf("Matrix is not square.\n");
        return 0;
    }
}

float MatrixAntiDiagonalSum(float *a, int rows, int cols)
{
    if (rows == cols)
    {
        float antidiagsum = 0;
        for (int i = 0; i < rows; i++)
        {
            antidiagsum += *(a + cols * (rows - i - 1) + (i));
        }
        return antidiagsum;
    }
    else
    {
        printf("Matrix is not square.\n");
        return 0;
    }
}

int SymmetryMatrix(float *a, int rows, int cols)
{
    if (rows == cols)
    {
        int count = 0;
        for (int i = 0; i < cols; ++i)
        {
            for (int j = 0; j < rows; ++j)
            {
                float element = *(a + j * cols + i);
                if (element == *(a + i * cols + j))
                {
                    count++;
                }
            }
        }
        if (count == (rows) * (cols))
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
    else
    {
        printf("Matrix is not square.\n");
        return 0;
    }
}

int OrthogonalityMatrix(float *a, int rows, int cols)
{
    if (rows == cols)
    {
        float sum = 0;
        for (int i = 0; i < cols; ++i)
        {
            for (int j = 0; j < rows; ++j)
            {
                float element = *(a + j * cols + i);
                sum += *(a + i * cols + j) * element;
            }
        }
        if (sum == 0)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
    else
    {
        printf("Matrix is not square.\n");
        return 0;
    }
}

void MatrixMult(float *a, float *b, int rowsA, int colsA, int rowsB, int colsB)
{
    if (colsA == rowsB)
    {
        float product[rowsA][colsB];
        for (int i = 0; i < rowsA; i++)
        {
            for (int j = 0; j < colsB; j++)
            {
                float sum = 0;
                for (int k = 0; k < colsA; k++)
                {
                    sum += *(a + i * colsA + k) * *(b + k * colsB + j);
                }
                product[i][j] = sum;
            }
        }
        for (int i = 0; i < rowsA; i++)
        {
            for (int j = 0; j < colsB; j++)
            {
                printf("%f ", product[i][j]);
            }
            printf("\n");
        }
    }
    else
    {
        printf("Matrix multiplication is not possible, incorrect matrix dimensions.\n");
    }
}
