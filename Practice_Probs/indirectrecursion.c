#include <stdio.h>

void funB(int n); // Function prototype

void funA(int n) {
    if (n > 0) {
        printf("%d ", n);
        funB(n - 1); // Recursive call to funB
    }
}

void funB(int n) {
    if (n > 1) {
        printf("%d ", n);
        funA(n / 2); // Recursive call to funA
    }
}

int main() {
    funA(20);
    return 0;
}
