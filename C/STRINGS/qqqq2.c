//Write a c program to find the number of vowels in user input string
#include <stdio.h>

int main() {
    char str[100];
    int count = 0, i;
    printf("Enter a string: ");
    gets(str);
    for(i = 0; str[i] != '\0'; ++i) {
        if(str[i]=='a' || str[i]=='e' || str[i]=='i' ||
           str[i]=='o' || str[i]=='u' || str[i]=='A' ||
           str[i]=='E' || str[i]=='I' || str[i]=='O' ||
           str[i]=='U') {
            ++count;
        }
    }
    printf("Number of vowels in the string: %d", count);
    return 0;
}