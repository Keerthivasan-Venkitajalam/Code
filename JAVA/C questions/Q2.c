//C program to read two strings form a new string by adding second string at 'n'th position of first string
#include <stdio.h>
#include <string.h>

int main() {
    char str[100], newStr[200];
    int index;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strlen(str) - 1] = '\0';  

    printf("Enter an index: ");
    scanf("%d", &index);

    strncpy(newStr, str, index);  
    newStr[index] = '\0'; 
    strcat(newStr, "AMRITA"); 
    strcat(newStr, str + index);  
    printf("Inserted at index: %s\n", newStr);

    return 0;
}
