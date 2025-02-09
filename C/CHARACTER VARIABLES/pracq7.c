#include<stdio.h>
int main(){
    float rad,diam,circum,area;
    printf("ENTER THE RADIUS OF THE CIRCLE :");
    scanf("%f",&rad);
    diam=2*rad;
    circum=2*3.14*rad;
    area=3.14*rad*rad;
    printf("THE DIAMETER OF THE CIRCLE=%f",diam);
    printf("THE CIRCUMFERENCE OF THE CIRCLE=%f",circum);
    printf("THE AREA OF THE CIRCLE=%f",area);
    return 0;
}