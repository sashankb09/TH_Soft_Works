#include <stdio.h>

// Function to calculate the nth Fibonacci number recursively
int fibonacci(int n) {
    // Base cases: Fibonacci(0) = 0 and Fibonacci(1) = 1
    if (n == 0)
        return 0;
    // Recursive case: Fibonacci(n) = Fibonacci(n-1) + Fibonacci(n-2)
    else
        return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int n = 10; // Calculate the 10th Fibonacci number
    printf("Fibonacci(%d) = %d\n", n, fibonacci(n));
    return 0;
}
