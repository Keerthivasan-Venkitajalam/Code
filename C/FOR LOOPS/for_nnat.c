#include <stdio.h>
int main(){
    int i,n,sum;
    printf("ENTER A NATURAL NUMBER (n) = ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        printf("%d\n", i);
        sum=sum+i;
    }
    printf("SUM = %d",sum);
}