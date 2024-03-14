#include <stdio.h>

int lowestSetBit(int num) {
    if (num == 0)
        return -1; 
    
    int position = 0;
    while ((num & 1) == 0) {
        num >>= 1;
        position++;
    }

    return position;
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    int lowestBitPos = lowestSetBit(num);

    if (lowestBitPos == -1)
        printf("No set bit found.\n");
    else
        printf("Position of lowest set bit: %d\n", lowestBitPos);

    return 0;
}
/*
Enter a number: 6
Position of lowest set bit: 1
*/