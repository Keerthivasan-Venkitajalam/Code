#include <stdio.h>
int main(){
    int n, i, j, temp;
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    int array[n]; 
    printf("Enter the elements: ");
    for (i=0;i<n;i++){
        scanf("%d",&array[i]); 
    }
    for (i=0;i<n;i++){
        for (j=i+1;j<n;j++){
            if (array[i] > array[j]){ 
                temp=array[i]; 
                array[i]=array[j];
                array[j]=temp;
            }
        }
    }
    printf("The sorted array in ascending order is: ");
    for (i=0;i<n;i++){
        printf("%d ",array[i]); 
    }
    printf("\n");
    return 0;
}
