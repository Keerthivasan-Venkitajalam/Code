#include <stdio.h>
#include <conio.h>

int add(){
    int a=12;
    int b=13;
    int c=a+b;

    return c;
}

int main(){
    int ans = add();
    printf("%d",ans);
    getch();
}