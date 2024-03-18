int add(int a, int b) {
    return a + b;
}


float divide(float a, float b) {
    return a / b;
}


void greet() {
    printf("Hello, world!\n");
}


int *createIntArray(int size) {
    int *arr = malloc(size * sizeof(int));
    // Code to initialize the array
    return arr;
}


#include <stdio.h>

// Function to initialize an integer array
void initializeArray(int *arr, int size) {
    // Initialize the array elements
    for (int i = 0; i < size; i++) {
        arr[i] = i ; 
    }
}

int main() {
    int size = 5;
    int myArray[size]; // Declare an array in the caller
    
    // Call the function to initialize the integer array
    initializeArray(myArray, size);
    
    // Print the elements of the array
    printf("Array elements:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", myArray[i]);
    }
    
    return 0;
}
