#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr;
    int n = 5;
    ptr = (int *)calloc(n, sizeof(int));

    if (ptr == NULL) {
        printf("Memory allocation failed.\n");
        exit(1);
    }
for (int i = 0; i < n; i++) {
        ptr[i] = i + 1;
    }
    // Print the array elements
    for (int i = 0; i < n; i++) {
        printf("%d ", ptr[i]); // All elements should be zero
    }
    printf("\n");

    // Free the allocated memory
    free(ptr);

    return 0;
}
