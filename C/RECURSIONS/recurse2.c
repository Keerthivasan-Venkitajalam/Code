#include <stdio.h>

void printHello(int count);

int main() {
    int n = 5;
    printHello(n);
    return 0;
}

void printHello(int count) {
    if (count == 0) {
        return;
    }
    printf("Hello!!!! \n");
    printHello(count - 1);
}
