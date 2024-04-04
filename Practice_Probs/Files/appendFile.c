#include <stdio.h>

int main() {
    FILE *fptr;
    char filename[100];
    char text[100];

    printf("Enter the filename: ");
    scanf("%s", filename);

    fptr = fopen(filename, "a");

    if (fptr == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    printf("Enter text to append to the file: ");
    getchar();
    fgets(text, sizeof(text), stdin);

    fprintf(fptr, "%s", text);

    fclose(fptr);

    printf("Content appended successfully.\n");

    return 0;
}
