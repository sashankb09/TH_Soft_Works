#include <stdio.h>

//#define Mode 1
#ifndef Mode
    #define MESSAGE "Deactivated"
#elif Mode == 1
    #define MESSAGE "Activated"
#else
    #define MESSAGE "Unknown mode"
#endif

int main() {
    printf("%s\n", MESSAGE);

    return 0;
}
