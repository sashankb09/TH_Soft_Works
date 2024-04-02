#include <stdio.h>

// Define structure A
struct one { 
	char c; 
	short int s; 
}; 

// Define structure B
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
