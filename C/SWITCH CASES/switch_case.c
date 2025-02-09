#include<stdio.h>
int main(){
    char chr_time;
    printf("ENTER  'm' ; MORNING \n");
    printf("ENTER  'n' ; NOON\n");
    printf("ENTER  'e' ; EVENING\n");
    printf("ENTER  'g' ; NIGHT\n");
    
    scanf("%c",&chr_time);
    switch(chr_time)
    {
        case 'm':
        printf("GOOD MORNING \n");
        printf("HAVE A NICE DAY \n");
        break;

        case 'n':
        printf("GOOD AFTERNOON \n");
        printf("HAVE AN ITALIAN LUNCH \n");
        break;

        case 'e':
        printf("GOOD EVENING \n");
        printf("HAVE A TEA \n");
        break;

        case 'g':
        printf("GOOD NIGHT \n");
        printf("SWEET DREAMS \n");
        break;

        default:
        printf("ENTER VALID CHARACTERS");
    }

}


        