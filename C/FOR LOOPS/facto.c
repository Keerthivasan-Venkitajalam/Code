#include <stdio.h>
int main(){
    int i=1,n,fact=1;
    printf("ENTER A VALUE (n) = ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        fact*=i;
    }
    printf("FACTORIAL = %d",fact);
}