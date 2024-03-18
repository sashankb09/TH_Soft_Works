//Global Scope
#include <stdio.h>

// Function declaration with global scope
void globalFunction();

int main() {
    // Call to global function
    globalFunction();
    return 0;
}

// Definition of global function
void globalFunction() {
    printf("This is a global function.\n");
}  


//Local scope


// Function declaration with local scope
void outerFunction() {
    // Local function definition
    void innerFunction() {
        printf("This is an inner function.\n");
    }

    // Call to local function
    innerFunction();
     // innerFunction(); // warning: implicit declaration of function ‘innerFunction’; did you mean ‘outerFunction’? [-Wimplicit-function-declaration
}

int main() {
    // Call to outer function
    outerFunction();
    return 0;
}


//Block scope 

#include <stdio.h>

int main() {
    // Outer block
    {
        // Inner block
        int x = 10;
        printf("x in inner block: %d\n", x);
    }

    // Error: 'x' is not accessible outside its block
    // printf("x in outer block: %d\n", x);

    return 0;
}
