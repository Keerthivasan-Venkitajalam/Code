#include<stdio.h>
int main(){
    int a;
    printf("Enter a no. to check Odd or Even: ");
    scanf("%d",&a);
    if (a%2==0){
        printf("%d is a Even Number ",a);
    }
    else{
        printf("%d is Odd Number ",a);
    }
    return 0;
}