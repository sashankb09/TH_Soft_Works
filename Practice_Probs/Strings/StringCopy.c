#include <stdio.h>

void Strcopy(char str[], int size, char str2[]) {
    for (int i = 0; i < size; i++) {
        str2[i] = str[i];
    }
}

int main() {
    char st[] = "Hello, world";
    int size = 12;  // The size should be 12, as 'H' to 'd' are 12 characters
    char st2[13];   // Initialize with proper size
    
    Strcopy(st, size, st2);

    for (int i = 0; i < size; i++) {
        printf("%c", st2[i]);
    }
    
    printf("\n");

    return 0;
}
