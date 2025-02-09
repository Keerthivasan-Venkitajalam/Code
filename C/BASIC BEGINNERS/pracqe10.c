#include<stdio.h>
int main(){
    int angle1,angle2,angle3,anglex,num;
    printf("ENTER ANGLE1=");
    scanf("%d",&angle1);
    printf("ENTER ANGLE2=");
    scanf("%d",&angle2);
    anglex=angle1+angle2;
    num=180;
    angle3=num-anglex;
    printf("ANGLE3=%d",angle3);
    return 0;
}
