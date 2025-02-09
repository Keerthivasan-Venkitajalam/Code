#include<stdio.h>
// To find duplicates in array
int main(){
    int a[]={2,1,3,4,5,3,1};
    int x=sizeof(a)/sizeof(a[0]);
    for(int i=0;i<x;i++){
        int max=0;
        for(int j=0;j<x;j++){
            if(a[i]==a[j]){
                max++;
            }
        }
        printf("%d : %d\n",a[i],max);
    }
}