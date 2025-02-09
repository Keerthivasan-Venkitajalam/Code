#include <stdio.h>

int main() {
    int n, m;
    printf("Enter the number of rows (n): ");
    scanf("%d", &n);
    printf("Enter the number of columns (m): ");
    scanf("%d", &m);

    int matrix[n][m];

    printf("Enter elements of the matrix:\n");
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            printf("Enter element a%d%d: ", i+1, j+1);
            scanf("%d", &matrix[i][j]);
        }
    }

    // Sum of elements in each row
    for(int i = 0; i < n; i++) {
        int rowSum = 0;
        for(int j = 0; j < m; j++) {
            rowSum += matrix[i][j];
        }
        printf("Sum of elements in row %d = %d\n", i+1, rowSum);
    }

    // Sum of elements in each column
    for(int i = 0; i < m; i++) {
        int colSum = 0;
        for(int j = 0; j < n; j++) {
            colSum += matrix[j][i];
        }
        printf("Sum of elements in column %d = %d\n", i+1, colSum);
    }

    // Sum of diagonal and anti-diagonal elements if it's a square matrix
    if(n == m) {
        int diagSum = 0, antiDiagSum = 0;
        for(int i = 0; i < n; i++) {
            diagSum += matrix[i][i];
            antiDiagSum += matrix[i][n-i-1];
        }
        printf("Sum of diagonal elements = %d\n", diagSum);
        printf("Sum of anti-diagonal elements = %d\n", antiDiagSum);
    }

    return 0;
}
