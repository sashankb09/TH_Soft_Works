#include <stdio.h>

// Function to calculate factorial recursively
unsigned long long factorial(int n) {
    // Base case: factorial of 0 is 1
    if (n == 0) {
        return 1;
    }
    // Recursive case: n! = n * (n-1)!
    else {
        return n * factorial(n - 1);
    }
}

int main() {
    int num = 5;
    unsigned long long fact = factorial(num);
    printf("Factorial of %d is %llu\n", num, fact);
    return 0;
}


// The base case is when n is equal to 0, where the function returns 1.
// The recursive case calculates the factorial of n by calling the factorial() function with n-1.
