#include <stdio.h>

int main() {
    int size, i;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr1[size], arr2[size];
    int *ptr1, *ptr2;

    printf("Enter the elements of the array:\n");
    for (i = 0; i < size; i++) {
        scanf("%d", &arr1[i]);
    }
    ptr1 = arr1;
    ptr2 = arr2;
    for (i = 0; i < size; i++) {
        *(ptr2 + i) = *(ptr1 + i);
    }
    printf("after copying to array2:\n");
    for (i = 0; i < size; i++) {
        printf("%d ", arr2[i]);
    }
    printf("\n");

    return 0;
}

// Enter the size of the array: 3
// Enter the elements of the array:
// 1
// 2
// 3
// after copying to array2:
// 1 2 3 