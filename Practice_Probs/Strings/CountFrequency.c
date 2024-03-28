#include <stdio.h>
#include <string.h>

void countFreq(char *arr) {
    int size=0;
    
    while(arr[size]!='\0'){
        size++;
    }
    
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
            printf("Element %c: %d\n", arr[i], count);
        }
    }
}

int main() {
    char arr[] = "sashank";
    countFreq(arr);

    return 0;
}
/*
Element s: s
Element a: 2
Element h: 1
Element n: 1
Element k: 1
*/