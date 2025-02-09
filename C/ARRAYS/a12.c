#include <stdio.h>
int main(){
int a[5]={1,2,3,4,5};
int *b=a;
printf("%p\n",a);
printf("%p\n",b);
printf("%p\n",&a[1]);
printf("%p\n",*(b+1));
printf("%p\n",*(b+2));
}