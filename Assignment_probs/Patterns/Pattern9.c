#include <stdio.h>

int main() {
    int i, j, k, n;
    printf("enter no of lines:");
    scanf("%d", &n);
    int nsp=n-1;
    int nst=1;
    for(i=1;i<=n;i++){
        for(j=1;j<=nsp;j++){
            printf(" ");
        }
        for(k=1; k<=nst;k++){
            printf("*");
        }
        nsp--;
        nst++;
        printf("\n");
    }
    for(i=n-1;i>=1;i--){
        for(j=1;j<=i;j++){
            printf("*");
        }
        printf("\n");
    }
    
    return 0;
}



/*
enter no of lines:5
    *
   **
  ***
 ****
*****
****
***
**
*
*/