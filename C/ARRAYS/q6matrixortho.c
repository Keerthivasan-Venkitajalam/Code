#include <stdio.h>

int main() {
    int r, c, i, j, k;
    int A[20][20], B[20][20], transpose[20][20], product[20][20];

    printf("Enter the number of rows and columns of the matrices: ");
    scanf("%d %d", &r, &c);

    printf("\nEnter elements of first matrix:\n");
    for(i = 0; i < r; i++) {
        for(j = 0; j < c; j++) {
            printf("Enter element A%d%d: ", i + 1, j + 1);
            scanf("%d", &A[i][j]);
        }
    }

    printf("\nEnter elements of second matrix:\n");
    for(i = 0; i < r; i++) {
        for(j = 0; j < c; j++) {
            printf("Enter element B%d%d: ", i + 1, j + 1);
            scanf("%d", &B[i][j]);
        }
    }

    // Finding transpose of matrix B
    for(i = 0; i < r; ++i)
        for(j = 0; j < c; ++j) {
            transpose[j][i] = B[i][j];
        }

    // Multiplying matrix A and transpose of B.
    for(i = 0; i < r; ++i)
        for(j = 0; j < c; ++j) {
            product[i][j] = 0;
            for(k = 0; k < c; ++k)
                product[i][j] += A[i][k] * transpose[j][k];
        }

    // Checking if product matrix is an identity matrix
    int flag = 1;
    for(i = 0; i < r; ++i)
        for(j = 0; j < c; ++j) {
            if(i == j && product[i][j] != 1)
                flag = 0;
            else if(i != j && product[i][j] != 0)
                flag = 0;
        }

    if(flag == 1)
        printf("\nThe matrices are orthogonal.\n");
    else
        printf("\nThe matrices are not orthogonal.\n");

    return 0;
}
