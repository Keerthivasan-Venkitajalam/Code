#include <stdio.h>
int main(){
    /*int *ptr = (int *)malloc(5 * sizeof(int));
	printf("%d", *ptr);*/
    int *ptr = (int *)malloc(sizeof(int));
	*ptr = 10;
    printf("%d", *ptr);
}