#include <stdio.h>

void concatStrings(const char str1[], const char str2[], char result[]) {
    int i, j;
    for (i = 0; str1[i] != '\0'; ++i) {
        result[i] = str1[i];
    }

    for (j = 0; str2[j] != '\0'; ++j) {
        result[i + j] = str2[j];
    }
    result[i + j] = '\0';
}

int main() {
    char str1[] = "Hello, ";
    char str2[] = "world!";

    char result[20];
    concatStrings(str1, str2, result);
    printf("Concatenated string: %s\n", result);
}
