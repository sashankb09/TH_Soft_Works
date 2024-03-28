#include <stdio.h>
#include <string.h>

void findHighestFreq(char *arr) {
    int size = strlen(arr);
    int maxFreq = 0;
    char maxFreqChar;

    for (int i = 0; i < size; i++) {
        int count = 0;
        if (arr[i] == '\0') {
            continue; 
        }
        for (int j = 0; j < size; j++) {
            if (arr[i] == arr[j]) {
                count++;
            }
        }
        if (count > maxFreq) {
            maxFreq = count;
            maxFreqChar = arr[i];
        }
    }

    printf("The character with the highest frequency is '%c' with frequency %d\n", maxFreqChar, maxFreq);
}

int main() {
    int size;
    printf("Enter the size of string :");
    scanf("%d",&size);
    char arr[100];
    printf("Enter the string Value :");
    for(int i=0;i<size;i++){
    scanf("%c",&arr[i]);
    }
    findHighestFreq(arr);

    return 0;
}