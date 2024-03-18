#include<stdio.h>

int fact(int n){
    if(n==0 || n==1){
return 1;
    }elsif{
        return n* fact(n-1);
    }else
    return fact(n-2);
}

int main(){
    int n = 6;
    printf("factoral of %d is %d\n",n,fact(n));
}