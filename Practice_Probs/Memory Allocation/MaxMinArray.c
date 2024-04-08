#include <stdio.h>
#include <stdlib.h>

int maxArr(int arr[], int size) {
    if (size == 0) {
        return 0;
    }
    int maxVal = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] > maxVal) {
            maxVal = arr[i];
        }
    }
    return maxVal;
}

int minArr(int arr[], int size) {
    if (size == 0) {
        return 0;
    }
    int minVal = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] < minVal) {
            minVal = arr[i];
        }
    }
    return minVal;
}

int main() {
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int *array = (int*)malloc(size * sizeof(int));
    if (array == NULL) {
        printf("Memory allocation failed\n");
        return -1;
    }

    printf("Enter %d elements:\n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &array[i]);
    }

    int max = maxArr(array, size);
    printf("The maximum value in the array is %d\n", max);

    int min = minArr(array, size);
    printf("The minimum value in the array is %d\n", min);

    free(array);

    return 0;
}
