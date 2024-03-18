// Function definition
void increment(int *x) {
    (*x)++; // Incrementing the value at the address stored in 'x'
}

int main() {
    int num = 5;
    printf("Before calling the function: %d\n", num);

    // Function call with address of 'num' as argument
    increment(&num);

    printf("After calling the function: %d\n", num); // After the function call, num is modified due to the increment operation performed within the increment function.
    return 0;
}


