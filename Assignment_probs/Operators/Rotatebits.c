#include <stdio.h>
int rotateLeft(int num, int positions) {
    return (num << positions);
}
int rotateRight(int num, int positions) {
    return (num >> positions);
}

int main() {
    int num;
    int positions, choice;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Enter the number of positions to rotate: ");
    scanf("%d", &positions);


    printf("Enter 1 to rotate left or 2 to rotate right: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("Result after rotating left by %d positions: %d\n", positions, rotateLeft(num, positions));
            break;
        case 2:
            printf("Result after rotating right by %d positions: %d\n", positions, rotateRight(num, positions));
            break;
        default:
            printf("Invalid choice.\n");
    }

    return 0;
}
