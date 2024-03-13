#include <stdio.h>

int main() {
    int n;

    printf("Enter the number of lines for the pattern: ");
    scanf("%d", &n);

    int num = 1;

    for (int i = 1; i <= n; i++) {
        if (i % 2 == 0) {
            for (int j = 0; j < i; j++) {
                printf("*");
            }
        } else {
            for (int j = 0; j < i; j++) {
                printf("%d", num);
            }
            num++;
        }
        printf("\n");
    }

    return 0;
}



/*
Enter the number of lines for the pattern: 5
1
**
222
****
33333
*/