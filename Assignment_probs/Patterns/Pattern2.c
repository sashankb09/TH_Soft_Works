#include<stdio.h>

int main() {
    int n;

    printf("Enter the number of lines for the pattern: ");
    scanf("%d", &n);

    for (int i = n; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}



// Enter the number of lines for the pattern: 5
// * * * * * 
// * * * * 
// * * * 
// * * 
// *
