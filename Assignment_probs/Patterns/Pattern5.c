#include <stdio.h>

int main(){
    int n;
    
    printf("Enter the number of lines: ");
    scanf("%d", &n);

    int nsp = 2 * n - 1, nst = 1;

    for(int i = 1; i <= n; i++) {
        for(int k = 1; k <= nst; k++) {
            printf("*");
        }
        
        for(int j = 1; j <= nsp; j++) {
            printf(" ");
        }
        
        for(int k = 1; k <= nst; k++) {
            printf("*");
        }
        
        nsp -= 2;
        nst++;
        
        printf("\n");
    }

    for(int i = 0; i <= 2 * n; i++) {
        printf("*");
    }
    
    return 0;
}



/*
Enter the number of lines: 5
*         *
**       **
***     ***
****   ****
***** *****
***********
*/