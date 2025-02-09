#include <stdio.h>
int main(){
    int i=1,n,sum;
    printf("ENTER A NATURAL NUMBER (n) = ");
    scanf("%d",&n);
    while(i<=n){
        printf("%d\n", i);
        sum=sum+i;
        i++;
    }
    printf("SUM = %d",sum);
}