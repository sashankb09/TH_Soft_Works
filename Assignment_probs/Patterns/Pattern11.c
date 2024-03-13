#include<stdio.h>
int main(){
    int i,j,k,n;
    printf("Enter no of lines:");
    scanf("%d",&n);
    int nst=2*n-1;
    int nsp = 0;
    for(i =1; i<=n; i++){
        for(k=1; k<=nsp;k++){
            printf(" ");
        }
        for(j =1; j<= nst;j++){
            printf("*");
        }
        nst-=2;
        nsp++;
        printf("\n");
    }
}


/*
Enter no of lines:7
*************
 ***********
  *********
   *******
    *****
     ***
      *
*/