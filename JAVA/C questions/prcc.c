#include <stdio.h>
#include <string.h>

int main(){
    char str[100], newstr[200];
    int index;

    printf("Enter a string:");
    fgets(str, sizeof(str),stdin);
    str[strlen(str)-1]='\0';

    printf("enter an index:");
    scanf("%d", &index);

    strncpy(newstr,str,index);
    newstr[index]='\0';
    strcat(newstr,"AMRITA");
    strcat(newstr, str + index);
    printf("Inserted at index: %s\n",newstr);

    return 0;

}