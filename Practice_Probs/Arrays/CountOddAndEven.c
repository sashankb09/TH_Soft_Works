#include <stdio.h>

// int arraySum(int array[], int size) {
//     if (size == 0) {
//         return 0;
//     }
//     return arraySum(array, size - 1) + array[size - 1];
// }
int odd(int arr[],int size){
    int count=0 ;
  for(int i=0;i<size;i++){
    if(arr[i]%2!=0){
        count++;
    }
  }
  return count;
}

int even(int arr[],int size){
    int count=0;
  for(int i=0;i<size;i++){
    if(arr[i]%2==0){
        count++;
    }
  }
  return count;
}

int main(){
    int array[] = {1, 2, 3, 4, 5};
    int size = 5;
   int oddsum= odd(array,size);
   int evensum=  even(array,size);
    
    printf(" odd array elements: %d\n", oddsum);
    printf("of even array elements: %d\n", evensum);
    
    return 0;
}
