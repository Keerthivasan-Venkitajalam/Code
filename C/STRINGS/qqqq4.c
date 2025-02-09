//C program to get a string from user and attach the string "1 2 3" in a) prefix b) post fix and c) index entered by user
#include <stdio.h>
#include <string.h>

int main() {
    char str[100], newStr[200];
    int index;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);  // read string
    str[strlen(str) - 1] = '\0';  // remove newline character

    printf("Enter an index: ");
    scanf("%d", &index);

    // Prefix
    strcpy(newStr, "1 2 3");
    strcat(newStr, str);
    printf("Prefix: %s\n", newStr);

    // Postfix
    strcpy(newStr, str);
    strcat(newStr, "1 2 3");
    printf("Postfix: %s\n", newStr);

    // Insert at index
    strncpy(newStr, str, index);  // copy first part
    newStr[index] = '\0';  // null terminate
    strcat(newStr, "1 2 3");  // append "1 2 3"
    strcat(newStr, str + index);  // append rest of original string
    printf("Inserted at index: %s\n", newStr);

    return 0;
}
