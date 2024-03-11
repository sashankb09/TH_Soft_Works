#include <stdio.h>
#include <limits.h>

int main()
{
    float a;
    int b;
    double c;
    char d;
    unsigned int e;
    unsigned char f;

    printf("The size of float datatype is %lu bytes\n", sizeof(a));
    printf("The size of int datatype is %lu bytes\n", sizeof(b));
    printf("The size of double datatype is %lu bytes\n", sizeof(c));
    printf("The size of char datatype is %lu bytes\n", sizeof(d));
    printf("The size of unsigned int datatype is %lu bytes\n", sizeof(e));
    printf("The size of unsigned char datatype is %lu bytes\n", sizeof(f));

    printf("Range of int datatype: %d to %d\n", INT_MIN, INT_MAX);
    printf("Range of unsigned int datatype: 0 to %u\n", UINT_MAX);
    printf("Range of char datatype: %d to %d\n", CHAR_MIN, CHAR_MAX);
    printf("Range of unsigned char datatype: 0 to %u\n", UCHAR_MAX);
    printf("Range of short int datatype: %hd to %hd\n",SHRT_MIN, SHRT_MAX);
    printf("Range of long int datatype: %ld to %ld\n",LONG_MIN, LONG_MAX);

    return 0;
}
