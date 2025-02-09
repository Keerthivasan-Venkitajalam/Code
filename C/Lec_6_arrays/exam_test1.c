#include<stdio.h>
int fib(int n);
main(){
    int n;
    printf("Enter the value for n :");
    scanf("%d",&n);
    fib(n);
    //printf("the i value id %d", i);
}


int t0=0;
int t1=1;
int t=1;
int i=3;
int fib(int n){
    printf("the i value is %d \n", i);
    if(i<=n){
        if(i==3){
            
            printf("The series is :%d\t%d\t",t1,t);
        }
        t0=t1;
        t1=t;
        t=t0+t1;
        printf("%d\t",t);
        i++;
        return fib(n);
    }else{
        return 0;
    }
}