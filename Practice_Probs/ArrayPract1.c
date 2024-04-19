#include<stdio.h>

void search(int arr[], int size, int ele) {
    int found = 0;
    for(int i = 0; i < size; i++) {
        if(arr[i] == ele) {
            found = 1;
            printf("The element is found at position %d\n", i);
            break;
        }
    }
    if(found == 0) {
        printf("The element is not found\n");
    }
}

int main() {
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    
     int *arr1 = (int *)malloc(size * sizeof(int));
    printf("Enter the array elements: ");
    for(int i = 0; i < size; i++) {
        scanf("%d", &arr1[i]);
    }
    
    int elt;
    printf("Enter the element to search: ");
    scanf("%d", &elt);
    
    search(arr1, size, elt);
    
    free(arr1);
}
