#include <stdio.h>
void WordsCount(char *str){
    int words=0;
    for (int i = 0; str[i] != '\0'; i++) {
        if ( str[i] == ' ' ) {
            words++;
        }
    }
    words++;
    printf("Total words: %d\n",words );
}
int main() {
    char str[100];
    printf("Enter a string:");
    fgets(str, sizeof(str), stdin);

    WordsCount(str);
    return 0;
}
