// To familarize the valid and invalid data type declaration

#include<stdio.h>

int main()
{
    int a=22;

    int b;
    b=5;

    int c=b;
    int d= a+1;

    // don't use variables before declaration
    // int e=f+1; 

    /* int old_age=20;
    int new_age=old_age+years;
    int years=2; */

    int old_age=20;
    int years=5;
    int new_age=old_age+years;

    // multiple variables declared in single instruction
    int x1,x2,x3;
    x1=x2=x3=6;

    //int y1=y2=y3=3;

    int x=1,y,z;
    int p,q=10,r=20;

return 0;
}