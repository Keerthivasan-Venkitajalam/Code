#include <stdio.h>
int main(){
    int arr[20], i, j, n;
    printf("ENTER SIZE OF THE ARRAY :");
    scanf("%d", &n);
    printf("ENTER THE ELEMENTS OF THE ARRAY :");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("\nDuplicate elements are :");
    for(i=0; i<n; i++){
        for(j=i+1; j<n; j++){
            if(arr[i]==arr[j]){
                printf("%d ", arr[j]);
        }
    }
}
return 0;
}