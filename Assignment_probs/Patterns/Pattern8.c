#include <stdio.h>

int main() {
    int i, j, k, n;
    printf("Enter the number of lines: ");
    scanf("%d", &n);

    // Increasing pattern
    for(i = 1; i <= n; i++) {
        for(j = 1; j <= i; j++) {
            printf("%d", i);
        }
        printf("\n");
    }

    // Decreasing pattern
    int nsp = n - 1;
    int nst = 1;
    for(i = 1; i <= n; i++) {
        for(j = 1; j <= nsp; j++) {
            printf(" ");
        }
        for(k = 1; k <= nst; k++) {
            printf("%d", n - i + 1);
        }
        nsp--;
        nst++;
        printf("\n");
    }

    return 0;
}



// 1
// 33
// 555
// 7777
// 99999
// 8888
// 666
// 44
// 2
