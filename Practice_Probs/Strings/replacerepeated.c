#include <stdio.h>

void replaceRepeated(char str[], int *size, char ele, char replace) {
    for (int i = 0; i < *size; ++i) {
        if (str[i] == ele) {
            str[i] = replace;
        }
    }
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

    char ele;
    printf("Enter the element to replace: ");
    scanf(" %c", &ele);

    char replace;
    printf("Enter the replacement element: ");
    scanf(" %c", &replace);

    replaceRepeated(arr, &size, ele, replace);

    printf("String after replacing occurrences of '%c' with '%c':\n", ele, replace);
    for (int i = 0; i < size; i++) {
        printf("%c ", arr[i]);
    }
    printf("\n");

    return 0;
}
/*
Enter the size of the string: 7
Enter string values:
sashank
Enter the element to replace: s
Enter the replacement element: d
String after replacing occurrences of 's' with 'd':
dadhank
*/