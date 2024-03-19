#include <stdio.h>

void insert(char orrArr[], int size, int position, char ins) {
    for (int i = 0; i < size; i++) {
        if (orrArr[i] == orrArr[position]) {
            orrArr[position] = ins;
        }
    }
}

void deleteElement(char orrArr[], int size, int position) {
    for (int i = position; i < size - 1; i++) {
        orrArr[i] = orrArr[i + 1];
    }
}

int main() {
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    char arr[size];
    printf("Enter %d elements for the array: ", size);
    for (int i = 0; i < size; i++) {
        scanf(" %c", &arr[i]);
    }

    int pos;
    printf("Enter the position for insertion: ");
    scanf("%d", &pos);

    char ins;
    printf("Enter the element to be inserted: ");
    scanf(" %c", &ins);

    insert(arr, size, pos, ins);
    printf("After insertion: ");
    for (int i = 0; i < size; i++) {
        printf("%c ", arr[i]);
    }

    int positio;
    printf("\nEnter the position for deletion: ");
    scanf("%d", &positio);

    deleteElement(arr, size + 1, positio); // Increase size by 1 to account for the insertion
    printf("\nAfter Deletion: ");
    for (int j = 0; j < size; j++) {
        printf("%c ", arr[j]);
    }

    return 0;
}
