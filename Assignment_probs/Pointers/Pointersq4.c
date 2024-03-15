#include <stdio.h>

int main() {
    int s;
    printf("Enter the size : ");
    scanf("%d", &s);
    int arr[s];
    int *ptr = arr;
    printf("Enter %d elements:\n", s);
    for (int i = 0; i < s; i++) {
        scanf("%d", ptr + i); // Input elements using pointer arithmetic
    }
    
    // Print array elements
    printf("Array elements are:\n");
    for (int i = 0; i < s; i++) {
        printf("%d ", *(ptr + i)); // Print elements using pointer arithmetic
    }
    
    return 0;
}

