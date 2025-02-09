/*#include <stdio.h>
#include <string.h>

int main() {
    char s[] = "DAMU";
    printf("Output: \n");
    for(int i = 0; i < strlen(s); i++) {
        printf("%c\n", s[i]);
    }
    return 0;
}*/
#include <stdio.h>
#include <string.h>

int main() {
    char s[100];

    printf("Enter a string: ");
    fgets(s, sizeof(s), stdin);  // read string

    printf("Output: \n");
    for(int i = 0; i < strlen(s); i++) {
        printf("%c\n", s[i]);
    }

    return 0;
}

