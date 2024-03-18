#include <stdio.h>

int ackermann(int m, int n) {
    if (m == 0) {
        return n + 1;
    }
    if (n == 0) {
        return ackermann(m - 1, 1);
    }
    return ackermann(m - 1, ackermann(m, n - 1));
}

int main() {
    printf("ackermann(2, 1) = %d\n", ackermann(2, 1));
    return 0;
}
