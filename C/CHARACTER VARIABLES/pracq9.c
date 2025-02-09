#include <stdio.h>

int main() {
    float a,b;
    printf("ENTER A VARIABLE 'A':");
    scanf("%f",&a);
    printf("ENTER A VARIABLE 'B':");
    scanf("%f",&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("a=%f",a);
    printf("b=%f",b);
    return 0;
}