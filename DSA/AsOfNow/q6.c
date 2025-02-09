#include <stdio.h>

int main() {
    int n, i;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    
    int A[n];
    printf("Enter %d integers: ", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &A[i]);
    }
    
    int lastElement = A[n-1];
    printf("The updated array is: ");
    for(i = 0; i < n; i++) {
        printf("%d ", A[i] + lastElement);
    }

    return 0;
}
