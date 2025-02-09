
#include <stdio.h>
int main(){
    int n,m;
    printf("Enter the value of rows and cols: ");
    scanf("%d%d", &n,&m);

    int a[n][m], b[n*m];
    for (int i=0; i<n; i++){
        for (int j = 0; j < m; j++)
        {
            printf("Enter element (%i,%i): ", i + 1, j + 1);
            scanf("%i", &a[i][j]);
            b[i * m + j] = a[i][j];
        }
    }
    for (int i = 0; i < n * m; i++)
    {
        printf("%i ", b[i]);
    }
}