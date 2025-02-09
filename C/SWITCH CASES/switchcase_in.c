#include<stdio.h>
int main(){
    int number;
    printf("ENTER  '1' ; MORNING \n");
    printf("ENTER  '2' ; NOON\n");
    printf("ENTER  '3' ; EVENING\n");
    printf("ENTER  '4' ; NIGHT\n");
    
    scanf("%d",&number);
    switch(number)
    {
        case 1:
        printf("GOOD MORNING \n");
        printf("HAVE A NICE DAY \n");
        break;

        case 2:
        printf("GOOD AFTERNOON \n");
        printf("HAVE AN ITALIAN LUNCH \n");
        break;

        case 3:
        printf("GOOD EVENING \n");
        printf("HAVE A TEA \n");
        break;

        case 4:
        printf("GOOD NIGHT \n");
        printf("SWEET DREAMS \n");
        break;

        default:
        printf("ENTER VALID CHARACTERS");
    }

    return 0;
}