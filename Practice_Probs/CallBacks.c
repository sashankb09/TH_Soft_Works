#include<stdio.h>

void sum(int a, int b) {
    printf("Sum: %d\n", a + b);
}

void sub(int a, int b) {
    printf("Subtraction: %d\n", a - b);
}

void display(void (*fptr)(int, int)) {
    (*fptr)(6, 1);
}

int main() {
    printf("Displaying sum:\n");
    display(sum);  // Calls display function with sum as argument

    printf("Displaying subtraction:\n");
    display(sub);  // Calls display function with sub as argument

    return 0;
}
