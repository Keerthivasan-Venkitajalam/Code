#include <stdio.h>

void delFirst(int *array, int size){
    for(int i = 1; i < size; i++){
        array[i-1] = array[i];
    }
    size = size - 1;
}

void printArray(int *array, int size) {
    for(int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
}

int main() {
    int array[] = {1, 2, 3, 4, 5};
    int size = sizeof(array) / sizeof(array[0]);

    printf("Before deletion: ");
    printArray(array, size);

    delFirst(array, size);
    size--;

    printf("After deletion: ");
    printArray(array, size);

    return 0;
}