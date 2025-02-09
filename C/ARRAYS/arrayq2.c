#include<stdio.h>
int main() {
    int n, m;
    printf("Enter the number of rows (n): ");
    scanf("%d", &n);
    printf("Enter the number of columns (m): ");
    scanf("%d", &m);

    int matrix[n][m], transpose[m][n];

    printf("\nEnter elements of the matrix:\n");
    for(int i=0; i<n; i++) {
        for(int j=0; j<m; j++) {
            printf("Enter element a%d%d: ", i+1, j+1);
            scanf("%d", &matrix[i][j]);
        }
    }

    for(int i=0; i<n; i++)
        for(int j=0; j<m; j++)
            transpose[j][i] = matrix[i][j];

    printf("\nTranspose:\n");
    for(int i=0; i<m; i++) {
        for(int j=0; j<n; j++)
            printf("%d  ", transpose[i][j]);
        printf("\n");
    }

    return 0;
}
