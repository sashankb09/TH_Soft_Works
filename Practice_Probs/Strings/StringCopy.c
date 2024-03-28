#include <stdio.h>

void stringCopy( char *source, char *destination) {
    while (*source != '\0') {
        *destination = *source;
        source++;
        destination++;
    }
    *destination = '\0';
}

int main() {
    char str[100];
    char str1[100];
    
    printf("Enter a string: ");
    scanf("%s", str);

    void (*ptr)(const char *, char *);
    ptr = &stringCopy;

    ptr(str, str1);

    printf("Original string: %s\n", str);
    printf("Copied string  : %s\n", str1);

    return 0;
}
