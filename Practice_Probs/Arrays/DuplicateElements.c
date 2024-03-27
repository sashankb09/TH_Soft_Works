#include <stdio.h>

void count(int arr[], int size) {
    int duplicates = 0; 
    for (int i = 0; i < size; i++) {
        int count = 0;
        for (int j = i+1; j < size; j++) {
            if (arr[i] == arr[j]) {
                count++;
                printf("%d\n",arr[i]);
                break;
            }
            
        }
        
        if (count > 0) {
            duplicates++;
        }
    }
    
    
    printf("Total number of duplicate elements: %d\n", duplicates);
}

int main() {
    int arr[] = {1, 2, 6, 2, 6, 5};
    int size = 6;
    
    count(arr, size);

    return 0;
}
