#include <stdio.h>
int main(){

    int n;
    printf("Enter the dimensions of the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the elements:");
   

    for(int i=0;i<n;i++){
        printf("Enter arr[%d]:", i);
        scanf("%d",&arr[i]);
    }


}