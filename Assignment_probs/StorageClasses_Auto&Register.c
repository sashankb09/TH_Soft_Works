#include<stdio.h>
int main(){
    auto int b =8; //Variables with the auto storage class are automatically created and destroyed within the function or block where they are defined
    printf("The auto storage value of b is :%d\n",b);
    register int c = 10; //register is similar to auto , but difference is the memory is allocated in the registers not in the stack
    printf("The rregister storage value of c is :%d",c);
    return 0;
}