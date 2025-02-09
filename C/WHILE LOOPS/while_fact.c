#include <stdio.h>
int main(){
    int i, n, fact=1;
    printf("ENTER THE VALUE OF n=\n");
    scanf("%d",&n);
    for(i=1; i<=n; ++i){
        fact=fact*i;
    }
    printf("THE FACTORIAL OF GIVEN NUMBER %d IS %d\n", n, fact);
    return 0;
}
