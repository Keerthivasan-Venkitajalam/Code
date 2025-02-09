#include <stdio.h>
#include <stdlib.h>
int main(){
    int *b=(int*)malloc(5*sizeof(int));
    for(int i=0; i<5; i++){
        b[i]=i+1;
    }
    printf("%d",b);
}