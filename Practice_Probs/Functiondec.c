#include <stdio.h>

// Function declaration/prototype
int add(int a, int b);

int main() {
    int result;
    // Function call
    result = add(3, 5);
    printf("Result: %d\n", result);
    return 0;
}

// Function definition
int add(int a, int b) {
    return a + b;
}
