#include <stdio.h>


int add(int a, int b);
int subtract(int a, int b);
int main() {
    // Declare function pointers
    int (*operation)(int, int);
    
    operation = add; // Assign address of add function to the function pointer

    printf("Result of addition: %d\n", operation(5, 3));

    
    operation = subtract; // Assign address of subtract function to the function pointer

    // Call function through pointer
    printf("Result of subtraction: %d\n", operation(5, 3));

    return 0;
}

int add(int a, int b) {
    return a + b;
}

int subtract(int a, int b) {
    return a - b;
}
