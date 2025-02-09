//Write a C program to check whether the entered number is a palindrome number or not. Use user defined recursive function call to find the palindrome
#include<stdio.h>
int Palindrome(int n, int temp)
{
    if (n == 0)
        return temp;
    temp = (temp * 10) + (n % 10);
    return Palindrome(n / 10, temp);
}

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    int temp = Palindrome(n, 0);
    if (temp == n)
        printf("%d = palindrome number.\n", n);
    else
        printf("%d = not palindrome number.\n", n);
    return 0;
}
