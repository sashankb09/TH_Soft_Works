#include <stdio.h>

void countDown(int n) {
    if (n <= 0) {
        return;
    }
    printf("%d ", n);
    countDown(n - 1); // Recursive call
}

int main() {
    countDown(5);
    return 0;
}
