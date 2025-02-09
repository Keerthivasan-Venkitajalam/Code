#include <stdio.h>
int main(){
    int a[30],b[30],sum[30];
    int i,n;
    printf("Enter the size of the array:");
    scanf("%d",&n);
    printf("Enter the elements in 1st array:");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("Enter the elements in 2nd array:");
    for(i=0;i<n;i++){
        scanf("%d",&b[i]);
    }
    for (i=0;i<n;i++){
        sum[i]=a[i]+b[i];
    }
    printf("Sum of the two arrays:");
    for (i=0; i<n;i++){
        printf("%d",sum[i]);
    }
    return 0;
}

