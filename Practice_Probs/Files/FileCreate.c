#include <stdio.h>

int main() {
    FILE *fptr;
    char filename[100];
    char content[1000];

    printf("Enter the filename: ");
    scanf("%s", filename);

    fptr = fopen(filename, "w");

    if (fptr == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    printf("Enter content for the file:\n");
    scanf(" %[^\n]", content);

    fprintf(fptr, "%s", content);

    fclose(fptr);

    printf("File created and content saved successfully.\n");
}
