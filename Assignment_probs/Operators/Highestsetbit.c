#include <stdio.h>

int highestSetBit(int num) {
    int position = 0;

    if (num == 0)
        return -1;
    while (num) {
        num >>= 1;
        position++;
    }

    return position;
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    int highestBitPos = highestSetBit(num);

    if (highestBitPos == -1)
        printf("No set bit found.\n");
    else
        printf("Position of highest set bit: %d\n", highestBitPos);

    return 0;
}



/*
Enter a number: 12
Position of highest set bit: 4
  */