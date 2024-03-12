#include <stdio.h>
void funStatic() {
    static int Value = 0;
    printf("Static variable is : %d\n", Value);
    Value++;
}
int main() {
    funStatic(); // when the function is called at first time
    funStatic(); // when the function is called second time
    return 0;
}
