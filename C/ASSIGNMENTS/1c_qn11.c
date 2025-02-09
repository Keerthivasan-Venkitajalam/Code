// **Multiplication table in reverse order:**=
#include <stdio.h>
int main() {
    int n;
    printf("ENTER A NUMBER (n)=");
    scanf("%d",&n);
    for(int i=10;i>=1;i--){
        printf("%d*%d=%d\n",i,n,n*i);
    }
}