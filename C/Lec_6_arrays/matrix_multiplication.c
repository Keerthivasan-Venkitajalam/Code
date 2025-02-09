#include<stdio.h>
int main() {
    int n,m,p,q, i, j, k;

    printf("Enter the no.of rows in matrix 1: ");
    scanf("%d", & m);
    printf("Enter the no.of columns in matrix 1:");
    scanf("%d", & n);
    printf("Enter the no.of rows in matrix 2: ");
    scanf("%d", & p);
    printf("Enter the no.of columns in matrix 2:");
    scanf("%d", & q);
    
    
    int a[m][n], b[p][q], c[m][q];
    if(n==p)
    {
    printf("Enter the elements of Matrix-A: \n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", & a[i][j]);
        }
    }

    printf("Enter the elements of Matrix-B: \n");

    for (i = 0; i < p; i++) {
        for (j = 0; j < q; j++) {
            scanf("%d", & b[i][j]);
        }
    }

    for (i = 0; i < m; i++) {
        for (j = 0; j < q; j++) {
            c[i][j] = 0;
            for (k = 0; k < n; k++) {
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    printf("The product of the two matrices is: \n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("%d\t", c[i][j]);
        }
        printf("\n");
    }
    }
    else
    printf("INVALID MATRIX DIMENSION");
    return 0;
}
