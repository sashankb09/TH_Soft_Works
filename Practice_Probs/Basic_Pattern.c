#include <stdio.h>

int main() {
    int rows = 5; // You can change the number of rows as needed

    // Outer loop for rows
    for (int i = 1; i <= rows; i++) {
        // Inner loop for columns
        for (int j = 1; j <= i; j++) {
            if (i % 2 == 1) {
                // Print numbers for odd rows
                printf("%d ", j);
            } else {
                // Print characters for even rows (A, B, C, ...)
                printf("%c ", 'A' + j - 1);
            }
        }
        printf("\n");
    }

    return 0;
}
