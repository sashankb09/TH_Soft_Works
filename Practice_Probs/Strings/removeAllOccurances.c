#include <stdio.h>


void allOccurances(char str[], int *size ,char Ele,char rel) {
      for (int i = 0; i < *size; ++i) {
        if(str[i]==Ele){
            str[i]=rel;
        }
      }
}




int main() {
    int size;
    printf("Enter the size of the string: ");
    scanf("%d", &size);


    char arr[size];
    printf("Enter string values:\n", size);
    for (int i = 0; i < size; ++i) {
        scanf("%s", &arr[i]);
    }
    char Ele[10];
    char Ele;
    printf("Enter the element to remove: ");
    scanf("%s", &Ele);

    allOccurances(arr, &size,Ele);

    printf("string after deleting duplicates:\n");
    for (int i = 0; i < size; ++i) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}


// Enter the size of the array: 5
// Enter 5 elements of the array:
// 1 1 2 3 5
// Array after deleting duplicates:
// 1 2 3 5 