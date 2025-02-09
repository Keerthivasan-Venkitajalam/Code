#include <stdio.h>

int main() {
    int r, c, i, j, sum = 0;

    printf("Enter the number of rows: ");
    scanf("%d", &r);
    printf("Enter the number of columns: ");
    scanf("%d", &c);

    int matrix[r][c];

    printf("Enter elements of the matrix:\n");
    for(i = 0; i < r; i++)
        for(j = 0; j < c; j++) {
            printf("Enter element a%d%d: ", i + 1, j + 1);
            scanf("%d", &matrix[i][j]);
        }

    for(i = 0; i < r; i++)
        for(j = 0; j < c; j++)
            sum = sum + matrix[i][j];

    printf("Sum of all elements of matrix = %d", sum);

    return 0;
}
