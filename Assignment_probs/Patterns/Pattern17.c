#include <stdio.h>

int main() {
    int n;

    printf("Enter the number of lines for the pattern: ");
    scanf("%d", &n);

    int num;
    for (int i = 1; i <= n * 2 - 1; i++) {
        if (i <= n) {
            num = i;
        } else {
            num = n * 2 - i;
        }

        for (int j = 1; j <= num; j++) {
            printf("%d", j);
        }
        printf("\n");
    }

    return 0;
}




// Enter the number of lines for the pattern: 5
// 1
// 12
// 123
// 1234
// 12345
// 1234
// 123
// 12
// 1
