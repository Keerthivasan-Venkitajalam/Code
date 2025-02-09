#include <stdio.h>

int main() {
    int n;
    printf("Enter the dimension of the vectors: ");
    scanf("%d", &n);

    int a[n], b[n];
    
    printf("Enter elements of the first vector:\n");
    for(int i = 0; i < n; i++) {
        printf("Enter element a%d: ", i+1);
        scanf("%d", &a[i]);
    }

    printf("Enter elements of the second vector:\n");
    for(int i = 0; i < n; i++) {
        printf("Enter element b%d: ", i+1);
        scanf("%d", &b[i]);
    }

    int dotProduct = 0;
    for(int i = 0; i < n; i++) {
        dotProduct += a[i] * b[i];
    }

    if(dotProduct == 0)
        printf("The vectors are orthogonal.\n");
    else
        printf("The vectors are not orthogonal.\n");

    return 0;
}
