//Write a C program to display Pascal's Triangle. Take the number of rows as input from the user. Use user defined
//recursive function call to print the triangle
 #include<stdio.h>
 int bincoeff(int k,int n);
 void printPascalTriangle(int k){
    for (int l=0; l<k; l++)
    {
        for (int i=0; i<=l; i++)
        printf("%d", bincoeff(l,i));
        printf("\n");
    }
 }
 int bincoeff(int k, int n){
    if(n==0||n==k)
    return 1;
    return bincoeff(k-1, n-1) + bincoeff(k-1,n);
 }
 int main(){
    int k;
    printf("Enter the number of rows: ");
    scanf("%d",&k);
    printPascalTriangle(k);
    return 0;
 }