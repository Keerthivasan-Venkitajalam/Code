#include <stdio.h>
main(){
    int age = 22;
    int *ptr=&age;

    printf("AGE IS %d\n",ptr);
    printf("AGE IS %d\n",ptr++);
    printf("AGE IS %d\n",ptr+4);
}