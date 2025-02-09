#include <stdio.h>
int main() {
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);

    // true if num is perfectly divisible by 2
    if(num % 2 == 0)
        printf("%d IS EVEN.", num);
    else
        printf("%d IS ODD.", num);
    
    return 0;
}
