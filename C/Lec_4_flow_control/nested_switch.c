#include <stdio.h>

int main() {

    int year_period;
    int year;

    printf("Enter 1 ; 1980-1989 \n");
    printf("Enter 2 ; 1990-1999 \n");
    printf("Enter 3 ; 2000-2009 \n");
    printf("Enter 4 ; 2010-2019\n");

    scanf("%d",&year_period);

    switch (year_period)
    {
        case 1:
            
            printf("Enter 1 ; 1980 \n");
            printf("Enter 2 ; 1981 \n");
            printf("Enter 3 ; 1982 \n");
            printf("Enter 4 ; 1983\n");

            scanf("%d",&year);

            switch (year)
            {
                case 1:
                printf("year is 1980 \n");
                break;

                case 2:
                printf("year is 1981 \n");
                break;

                case 3:
                printf("year is 1983 \n");
                break;

                case 4:
                printf("year is 1984 \n");
                break;
    
                default:
                printf("year is above 1983 \n");
                break;
            }
        break;

        case 2:
            printf("Good afternoon \n");
            printf("Enjoy the Lunch \n");
        break;

        case 3:
            printf("Good evening \n");
            printf("Enjoy your tea \n");
        break;

        case 4:
            printf("Enjoy dinner \n");
            printf("Good Night \n");
            printf("Have a nice sleep \n");
        break;
    
        default:
            printf("Invalid Case Number \n");
        break;
    }

    return 0;

}