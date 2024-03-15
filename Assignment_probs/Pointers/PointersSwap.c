#include <stdio.h>

int main() {
    int size, i;

    printf("Enter the size of the arrays: ");
    scanf("%d", &size);

    int arr1[size], arr2[size], arr3[size];
    int *ptr1, *ptr2, *ptr3, temp;

    printf("Enter the elements of the first array:\n");
    for (i = 0; i < size; i++) {
        scanf("%d", &arr1[i]);
    }
    printf("Enter the elements of the second array:\n");
    for (i = 0; i < size; i++) {
        scanf("%d", &arr2[i]);
    }
    ptr1 = arr1;
    ptr2 = arr2;
    ptr3 = arr3;
    for (i = 0; i < size; i++) {
        *(ptr3 + i) = *(ptr1 + i); 
        *(ptr1 + i) = *(ptr2 + i); 
        *(ptr2 + i) = *(ptr3 + i); 
    }

    printf("After swapping:\n");
    printf("First Array (arr1): ");
    for (i = 0; i < size; i++) {
        printf("%d ", arr1[i]);
    }
    printf("\nSecond Array (arr2): ");
    for (i = 0; i < size; i++) {
        printf("%d ", arr2[i]);
    }
    printf("\n");

    return 0;
}
