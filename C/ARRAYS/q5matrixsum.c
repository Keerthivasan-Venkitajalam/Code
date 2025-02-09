#include <stdio.h>

int main() {
    int n, m, sum = 0;
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

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            sum += matrix[i][j];
        }
    }

    printf("Sum of all elements of matrix = %d", sum);

    return 0;
}
