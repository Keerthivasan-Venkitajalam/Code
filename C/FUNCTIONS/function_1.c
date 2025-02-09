//Write a C program to find the sum, product, average, hcf and factorials use user defined functions. my_sum to find sum, my_pdt to find product, 
//my_hcf to find hcf amd my_fact to find factorials
#include<stdio.h>

int my_sum(int a,int b) {
        return a+b;
}
int my_pdt(int a,int b) {
        return a*b;
}
int my_hcf(int a,int b) {
    if (b == 0)
        return a;
    return my_hcf(b,a%b);
}
int my_fact(int n) {
    if (n == 0)
        return 1;
    else
        return n * my_fact(n - 1);
}

int main() {
    int num1, num2;

    printf("Enter two numbers: ");
    scanf("%d%d", &num1,&num2);

    printf("sum: %d\n", my_sum(num1,num2));
    printf("pdt: %d\n", my_pdt(num1,num2));
    printf("hcf: %d\n", my_hcf(num1,num2));
    printf("factorial of %d: %d\n", num1, my_fact(num1));
    printf("factorial of %d: %d\n", num2, my_fact(num2));

    return 0;
}


