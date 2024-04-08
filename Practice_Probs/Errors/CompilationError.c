#include <stdio.h>

int main() {
    int x = 10;
    printf("The value of x is: %d\n", x);
    return 0;
}

// main.c: In function ‘main’: Compilation error
// main.c:5:5: warning: implicit declaration of function ‘print’; did you mean ‘printf’? [-Wimplicit-function-declaration]
//     5 |     print("The value of x is: %d\n", x);
//       |     ^~~~~
//       |     printf