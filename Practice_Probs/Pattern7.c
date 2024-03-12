#include <stdio.h>

int main() {
    int rows = 5; // You can adjust the number of rows as needed

    for (int i = rows; i >= 1; i--) {
        for (int j = i; j < rows; j++) {
            printf(" ");
        }
        for (int k = 1; k <= 2 * i - 1; k++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
