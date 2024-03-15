#include <stdio.h>

int main() {
    int s;
    printf("Enter the size : ");
    scanf("%d", &s);
    int arr[s];
    int *ptr = arr;
   
    printf("Enter %d elements:\n", s);
    for (int i = 0; i < s; i++) {
        scanf("%d", ptr + i); 
    }
    int n;
    printf("Enter n value: ");
    scanf("%d", &n);
    for (int i = 0; i < s; i++) {
        if (*(ptr + i) == n) {
            printf("Element %d found at position %d\n", n, i);
       
            return 0;
        }
    }
    printf("Element %d not found in the array\n", n);
    
    return 0;
}

// Enter the size : 3
// Enter 3 elements:
// 1 
// 2 
// 3
// Enter n value: 2
// Element 2 found at position 1
