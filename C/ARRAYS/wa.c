#include <stdio.h>
int main() {
    int n;
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the array elements: \n");
    for(int i=0;i<n;i++){
        scanf("%d ",&arr[i]);
    }
    printf("\nThe array is: \n");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}