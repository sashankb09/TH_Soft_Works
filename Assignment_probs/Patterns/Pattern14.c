
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
        nst++;
        printf("\n");
    }
    int nsp1=0;
    int nst1=n;
    for(i=n;i>=1;i--){
        for(j=1;j<=nsp1;j++){
            printf(" ");
        }
        for(k=1;k<=nst1;k++){
            printf("*");
        }
        nsp1++;
        nst1--;
        printf("\n");
    }
    
    return 0;
}




// enter no of lines:5
//     *
//     **
//     ***
//     ****
//     *****
// *****
//  ****
//   ***
//    **
//     *