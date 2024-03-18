#include<stdio.h>

int sum(int a, int b){
    return a+b;
}
int (*ptr)(int , int) = &sum; // here the pointer points to the function and then return a pointer to integer
 int main(){
    int s = (*ptr)(2,3);
    printf("%d",s);
 }


//The function pointers contains the address of the code 


