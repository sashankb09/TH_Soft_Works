#include <stdio.h>

// int factorial(int num);

int factorial(int num) {
    if(num<1){
        return -1;
    }else
    return num*(num-1);
}

int main() {
    int result;
    // Function call
    result = factorial(3);
    printf("Result: %d\n", result);
    return 0;
}

// Function definition

