#include <stdio.h>
#include <ctype.h> 

int countWords(char str[]) {
    int count = 0;
    int inWord = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        if (!isspace(str[i]) && !inWord) {
            count++;
            inWord = 1;
        }

        else if (isspace(str[i])) {
            inWord = 0;
        }
    }

    return count;
}

int main() {
    char str[1000];

    // Input string from the user
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    printf("Total number of words: %d\n", countWords(str));

    return 0;
}
