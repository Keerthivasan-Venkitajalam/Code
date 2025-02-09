#include<stdio.h>
int base2conv(int);
int base2conv(int n)
{
if (n<2)
printf("%d",n);
else{
base2conv(n/2);
printf("%d",n%2); 
}
}
int main(){
int n;
printf("Enter a number : ");
scanf("%d",&n);
base2conv(n);
return 0;
}