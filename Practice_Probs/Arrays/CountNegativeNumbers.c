#include <stdio.h>

int negative(int arr[],int size){
    int count=0;
  for(int i=0;i<size;i++){
    if(arr[i]<0){
        count++;
    }
  }
  return count;
}

int main(){
    int array[] = {1, -2, 3, 4, 5};
    int size = 5;
 
   int negativee= negative(array,size);

    printf("Sum of even array elements: %d\n", negativee);
    
    return 0;
}
