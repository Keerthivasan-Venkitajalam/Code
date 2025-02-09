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

void MatrixMult(float *a, float *b, int rows, int cols)
{
    float arr1[rows][cols], arr2[rows][cols];
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            float sum = 0;
            for (int k = 0; k < cols; k++)
            {
                sum += *(a + i * cols + k) * *(b + k * cols + j);
            }
            printf("%f ", sum);
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

int InvertibilityMatrix(float *a, int rows, int cols)
{
    float det = 0;
    for (int i = 0; i < rows; i++)
    {
        for (int j = i + 1; j < cols; j++)
        {
            float ratio = *(a + j * cols + i) / *(a + i * cols + i);
            for (int k = 0; k < rows; k++)
            {
                *(a + j * cols + k) = *(a + j * cols + k) - ratio * *(a + i * cols + i);
            }
        }
        det = det * *(a + i * cols + i);
    }
    if (det == 0)
    {
        return 0;
    }
    else
    {
        return 1;
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

void MatrixRowSum(float *a, int rows, int cols)
{

    for (int i = 0; i < rows; ++i)
    {
        float rsum = 0;
        for (int j = 0; j < cols; ++j)
        {
            float element = *(a + j * cols + i);
            rsum += element;
        }
        printf("Row %i Sum: %f", i + 1, rsum);
    }
}

void MatrixColumnSum(float *a, int rows, int cols)
{
    for (int i = 0; i < cols; ++i)
    {
        float csum = 0;
        for (int j = 0; j < rows; ++j)
        {
            float element = *(a + j * cols + i);
            csum += element;
        }
        printf("Column %i Sum: %f", i + 1, csum);
    }
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
            antidiagsum += *(a + cols * (rows - i - 1) + (rows - i - 1));
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
    if (count == rows * cols)
    {
        return 1;
    }
    else
    {
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