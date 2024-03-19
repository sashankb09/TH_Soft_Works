#include <stdio.h>

int arraySum(int array[], int size) {
    if (size == 0) {
        return 0;
    }
    return arraySum(array, size - 1) + array[size - 1];
}

int main(){
    int (*ptr)(int[],int)=&arraySum;
    int array[] = {1, 2, 3, 4, 5};
    int size = sizeof(array) / sizeof(array[0]);
    int sum = (*ptr)(array, size);
    
    printf("Sum of array elements: %d\n", sum);
    
    return 0;
}
