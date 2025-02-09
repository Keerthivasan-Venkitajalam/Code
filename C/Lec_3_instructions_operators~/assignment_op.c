/* Assignment Operators
=, +=, -+, *=, /=, %=

    a+=b ----> a=a+b;
    a-=b ----> a=a-b;
    a*=b ----> a=a*b;
    a/=b ----> a=a/b;
    a%=b ----> a=a%b;

*/


#include<stdio.h>

int main()
{
    int a =5, b=3;

    a += b; //a=a+b;
    printf("a = %d \n", a);

    int p =5, q=3;

    p -= q; //p=p-q;
    printf("p = %d \n", p);

    int x=5,y=3;
    x *= y;
    printf("x = %d \n", x);

    int a1=5,a2=3;
    a1 /= a2;
    printf("a1 = %d \n", a1);

    return 0;
}