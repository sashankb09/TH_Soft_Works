#include <stdio.h>

void count(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        int count = 0;
        for (int j = 0; j < size; j++) {
            if (arr[i] == arr[j]) {
                count++;
            }
            
        }
        int single = 1;
        
        for(int k=0;k<i;k++){
            if(arr[i]==arr[k]){
                single = 0;
                break;
            }
        }
        if(single==1){
            printf("Element %d: %d\n", arr[i], count);
        }
    }
}

int main() {
    int arr[] = {1, 2, 6, 2};
    int size = 4;
    
    count(arr, size);

    return 0;
}
