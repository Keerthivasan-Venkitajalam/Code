#include <stdio.h>

int main() {
    int a[20][20], b[20][20], row, col;
    int i, j, flag = 1;

    printf("Enter the number of rows and columns of the matrices: ");
    scanf("%d %d", &row, &col);

    printf("\nEnter elements of first matrix:\n");
    for(i = 0; i < row; i++) {
        for(j = 0; j < col; j++) {
            printf("Enter element a%d%d: ", i+1, j+1);
            scanf("%d", &a[i][j]);
        }
    }

    printf("\nEnter elements of second matrix:\n");
    for(i = 0; i < row; i++) {
        for(j = 0; j < col; j++) {
            printf("Enter element b%d%d: ", i+1, j+1);
            scanf("%d", &b[i][j]);
        }
    }

    // Comparing each element of the matrices
    for(i = 0; i < row; i++) {
        for(j = 0; j < col; j++) {
            if(a[i][j] != b[i][j]) {
                flag = 0;
                break;
            }
        }
    }

    if(flag == 1)
        printf("\nThe matrices are identical.");
    else
        printf("\nThe matrices are not identical.");

    return 0;
}
