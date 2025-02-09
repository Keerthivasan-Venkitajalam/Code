#include <stdio.h>
int main(){
    int n;
    printf("enter the dimensions of the array :");
    scanf("%d", &n);

    int arr[n];
    printf("enter the array elements: ");
    for (int i =0;i<n;i++){
        scanf("%d", &arr[i]);
    }
    printf("\nThe array is: \n");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}