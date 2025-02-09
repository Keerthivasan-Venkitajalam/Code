#include <stdio.h>

int main() {
    int len, breadth, area;

    printf("Enter the length of the rectangle: ");
    scanf("%d", &len);

    printf("Enter the breadth of the rectangle: ");
    scanf("%d", &breadth);

  
    area = len * breadth;

    
    printf("The area of the rectangle is %d\n", area);

    return 0;
}