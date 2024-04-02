#include <stdio.h>

struct Simple {
    int *ptr;
};
int main() {
    struct Simple s;
    int num = 10;

    s.ptr = &num;
    printf("Value stored at the pointer: %d\n", *(s.ptr));
}
