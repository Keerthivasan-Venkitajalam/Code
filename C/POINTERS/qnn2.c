//Write a C program to swap 2 numbers using an user defined function. Use call by referene and call by value
#include <stdio.h>

void swap_value(int a, int b){
    int temp=a;
    a=b;
    b=temp;
    printf("a=%d, b=%d\n",a,b);

}

void swap_ref(int *a, int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
    printf("a=%d, b=%d\n",*a,*b);
}

int main(){
    int x, y;
    printf("Enter the value for x: ");
    scanf("%d", &x);
    printf("Enter the value for y: ");
    scanf("%d", &y);

    
    swap_value(x,y);
    printf("\nAFTER VALUE SWAPPING: x=%d and y=%d\n",x,y);
    swap_ref(&x,&y);
    printf("\nAFTER REFERENCE SWAPPING: x=%d and y=%d\n",x,y);
    return 0;
}
