#include <stdio.h>

int main() {
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);

    // Checking if the least significant bit is set
    if (n & 1)
        printf("The number %d is odd.\n", n);
    else
        printf("The number %d is even.\n", n);

    return 0;
}
