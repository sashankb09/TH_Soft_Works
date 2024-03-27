#include <stdio.h>
#include <string.h>

int stringCompare(const char *str1, const char *str2) {
    while (*str1 != '\0' && *str1 != '\n' && *str2 != '\0' && *str2 != '\n' && *str1 == *str2) {
        str1++;
        str2++;
    }
    return *str1 - *str2;
}

int main() {
    char str1[100], str2[100];

    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);
    if (str1[strlen(str1) - 1] == '\n') {
        str1[strlen(str1) - 1] = '\0';
    }

    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);
    if (str2[strlen(str2) - 1] == '\n') {
        str2[strlen(str2) - 1] = '\0';
    }

    int (*ptr)(const char *, const char *);
    ptr = &stringCompare;

    int result = ptr(str1, str2);

    if (result != 0) {
        printf("The strings are not equal.\n");
    }

    return 0;
}
