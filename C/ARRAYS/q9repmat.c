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

    // Find the largest element in each row
    for(int i = 0; i < n; i++) {
        int maxElement = matrix[i][0];
        for(int j = 1; j < m; j++) {
            if(matrix[i][j] > maxElement) {
                maxElement = matrix[i][j];
            }
        }
        printf("Largest element in row %d = %d\n", i+1, maxElement);
    }

    return 0;
}
