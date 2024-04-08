#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr;
    int n = 5;

    // Allocate memory for an array of n integers
    ptr = (int *)malloc(n * sizeof(int));

    if (ptr == NULL) {
        printf("Memory allocation failed.\n");
        exit(1);
    }

    // Print the original array elements
    printf("Original array elements:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", ptr[i]);
    }
    printf("\n");

    // Reallocate memory for 10 integers
    ptr = (int *)realloc(ptr, 10 * sizeof(int));

    if (ptr == NULL) {
        printf("Memory reallocation failed.\n");
        exit(1);
    }

    // Print the new array elements (uninitialized)
    printf("New array elements:\n");
    for (int i = 0; i < 10; i++) {
        printf("%d ", ptr[i]); // Contents are uninitialized
    }
    printf("\n");

    // Free the allocated memory
    free(ptr);

    return 0;
}
