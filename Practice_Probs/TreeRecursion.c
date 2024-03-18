#include <stdio.h>

void fun(int n) {
    if (n > 0) {
        printf("%d ", n);
        fun(n - 1); // First recursive call
        fun(n - 1); // Second recursive call
    }
}

int main() {
    fun(3);
    return 0;
}
