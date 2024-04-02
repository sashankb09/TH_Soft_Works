#include <stdio.h>

int main() {
    int num = 1;
    char *byte = (char *)&num;
    if (*byte == 1) {
        printf("The platform is Little Endian.\n");
    } else {
        printf("The platform is Big Endian.\n");
    }

    return 0;
}
