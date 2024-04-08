#include <stdio.h>

int main() {
    int a = 10;
    float b = 3.14;
    float result;

    // Implicit type conversion - int to float
    result = a + b;
    printf("Result of implicit conversion: %f\n", result);

    // Explicit typecasting - float to int
    result = (float)a + b; // Here, 'a' is explicitly typecasted to float
    printf("Result of explicit conversion: %f\n", result);

    return 0;
}
