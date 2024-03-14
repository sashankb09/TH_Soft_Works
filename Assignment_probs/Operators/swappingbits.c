#include <stdio.h>

void swap(int a, int b) {
    printf("Before swapping:\n");
    printf("First number: %d\n", a);
    printf("Second number: %d\n", b);
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;
    printf("\nAfter swapping:\n");
    printf("First number: %d\n", a);
    printf("Second number: %d\n", b);
}

int main() {
    int num1, num2;
    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);
    swap(num1, num2);

    return 0;
}






// Enter the first number: 5
// Enter the second number: 7
// Before swapping:
// First number: 5
// Second number: 7

// After swapping:
// First number: 7
// Second number: 5