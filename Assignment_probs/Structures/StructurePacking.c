#include <stdio.h>

// Define structure A
#pragma pack(1)
struct one { 
	char c; 
	short int s; 
}; 

// Define structure B
#pragma pack(2)
struct two { 
	short int s; 
	char c; 
	int i; 
}; 

int main() 
{ 
    // Print the size of each structure
	printf("sizeof(struct one) = %lu\n", sizeof(struct one)); 
	printf("sizeof(struct two) = %lu\n", sizeof(struct two));
    
    return 0;
}
