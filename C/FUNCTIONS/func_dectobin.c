//Write a C program to convert a decimal value into its binary. Write the user defined function for the condition
#include <stdio.h>

void decToBinary(int dec) {
    int binary=0;
    int base=1;
if (dec==0){
    printf("BINARY : 0\n");
    return;
}
while(dec>0){
    int remainder=dec%2;
    binary=binary+remainder*base;
    dec/=2;
    base*=10;
    printf("%d",binary);
}

int main(){
    int n;
    printf("Enter a decimal number: ");
    scanf("%d", &dec);
    printf("Binary of %d is: ", n);
    decToBinary(n);
    return 0;
}
