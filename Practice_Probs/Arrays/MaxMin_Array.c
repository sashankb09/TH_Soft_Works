#include <stdio.h>
#include<limits.h>
int maxArr(int arr[], int size) {
    if (size == 0) {
        return 0;
    }
    int maxVal = maxArr(arr, size - 1);
    return (maxVal > arr[size - 1]) ? maxVal : arr[size - 1];
}
int minArr(int arr[], int size) {
    if (size == 0) {
        return INT_MAX;
    }
    int minVal = minArr(arr, size - 1);
    return (minVal < arr[size - 1]) ? minVal : arr[size - 1];
}



int main() {
    int array[] = {1, 2, 5, 7};
    int size = 4;
    int max = maxArr(array, size);
    printf("the maximum value in the array is %d\n", max);
    int min = minArr(array, size);
    printf("the minimum value in the array is %d", min);
    return 0;
}
