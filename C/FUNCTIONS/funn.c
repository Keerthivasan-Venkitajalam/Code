#include <stdio.h>
#include <conio.h>

int add(int a , int b){
    int c=a+b;

    return c;
}

int main(){
    int a =21;
    int b=37;
    printf("%d",add(a,b));
    getch();
}