#include <stdio.h>

int main() {
    int a = 10;
    int b = 0;
    int result;

    // Division by zero
    result = a / b; // Causes a runtime error
    printf("Result: %d\n", result);

    return 0;
}

// No ouput is displayed on screen due to run time error