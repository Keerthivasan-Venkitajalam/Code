#include<stdio.h>
int base4conv(int);
int base4conv(int n)
{
if (n<4)
printf("%d",n);
else{
base4conv(n/4);
printf("%d",n%4);
}}
int main(){
int n;
printf("Enter a number : ");
scanf("%d",&n);
base4conv(n);
return 0;
}