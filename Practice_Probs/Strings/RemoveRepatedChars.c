#include <stdio.h>
#include <stdbool.h>

void removeRepeated(char str[], int size) { 
    int newSize = 1;
    for (int i = 1; i < size; ++i) {
        bool repeated = false;
        for (int j = 0; j < newSize; ++j) {
            if (str[i] == str[j]) {
                repeated = true;
                break;
            }
        }
        if (!repeated) {
            str[newSize++] = str[i];
        }
    }
    size = newSize;
}

int main() {
    int size;
    printf("Enter the size of the string: ");
    scanf("%d", &size);

    char arr[size];
    printf("Enter string values:\n");
    for (int i = 0; i < size; ++i) {
        scanf(" %c", &arr[i]);
    }

    removeRepeated(arr, size);

    printf("String after deleting repeated characters:\n");
    for (int i = 0; i < size; ++i) {
        printf("%c ", arr[i]);
    }
    printf("\n");

    return 0;
}
