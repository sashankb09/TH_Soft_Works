#include <stdio.h>

int fibonacci(int num);

int main() {
    int n = 5;
    printf("Fibonacci Series up to %d:\n", n);
    for (int i = 0; i < n; i++) {
        printf("%d ", fibonacci(i));
    }
    printf("\n");
    return 0;
}

int fibonacci(int num) {
    if (num <= 1) {
        return num;
    } else {
        return fibonacci(num - 1) + fibonacci(num - 2);
    }
}

// Fibonacci Series up to 5:
// 0 1 1 2 3 