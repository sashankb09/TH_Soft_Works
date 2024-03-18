#include <stdio.h>

// Function definition
void increment(int x) {
    x++; // Incrementing the copy of 'x'
}

int main() {
    int num = 5;
    printf("Before calling the function: %d\n", num);
    increment(num);
    printf("After calling the function: %d\n", num); // 'num' remains unchanged
    return 0;
}
