#include <stdio.h>
int main(){
    int rows, cols;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &cols);
    int array[rows][cols];
    printf("Enter elements of the array:\n");
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            printf("Enter element at [%d][%d]: ", i, j);
            scanf("%d", &array[i][j]);
        }
    }
    printf("\nArray:\n");
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            printf("%d ", array[i][j]);
        }
        printf("\n");
    }
    return 0;
}