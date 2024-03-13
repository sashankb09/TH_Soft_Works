#include <stdio.h>
 #define NOValue
//  #define YESValue 
#if defined(NOValue) && defined(YesValue)
    #error "Both NOValue and YesValue are defined. Please choose only one."
#elif !defined(NOValue) && !defined(YesValue)
    #error "Neither NOValue nor YesValue is defined. Please define one of them."
#endif

int main() {
    printf("Compilation successful!\n");

    return 0;
}