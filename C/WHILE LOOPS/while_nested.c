#include <stdio.h>
int main(){
    int a=3,b=1;
    while (b<=a){
        printf("\n");
        int c=1;
        while(c<=b){
            printf("%d",&c);
            c=c+1;
        }
        b=b+1;
    }
    return 0;
}