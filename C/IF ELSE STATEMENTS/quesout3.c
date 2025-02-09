#include<stdio.h>
int main(){
    int mark;
    printf("Enter the student's mark: ");
    scanf("%d", &mark);
    if(mark > 100 || mark < 0){
        printf("Invalid mark. Please enter a mark between 0 and 100.");
    }
    else if(mark > 80){
        printf("A grade.");
    }
    else if(mark >= 60){
        printf("B grade.");
    }
    else if(mark >= 40){
        printf("C grade.");
    }
    else{
        printf("D grade.");
    }
    
    return 0;
}
