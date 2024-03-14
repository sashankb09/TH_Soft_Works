#include <stdio.h>
#define SIZE 4
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);


    //int msb_position = sizeof(int) * 8 - 1;
    int msb=1<<(SIZE-1);

   // while ((num >> msb_position) == 0 && msb_position > 0) {
        // msb_position--;
    
    if ((num  & msb)) {
        printf("The most significant bit (MSB) of %d is set.\n", num);
    } else {
        printf("The most significant bit (MSB) of %d is not set.\n", num);
    }

    return 0;
}