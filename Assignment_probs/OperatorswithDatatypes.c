#include <stdio.h>

int main() {
    float a1 = 2.25, a2 = 8.32;
    int b1 = 5, b2 = 10;
    double c1 = 2.356, c2 = 3.684;
    char d1 = 'h', d2 = 'a';
    unsigned int e1 = 54689, e2 = 54587;
    unsigned char f1 = 'd', f2 = 'w';
    char string_concat[] = {d1, d2};

    // Arithmetic
    printf("Addition of a1 and a2: %.2f\n", a1 + a2);
    printf("Addition of b1 and b2: %d\n", b1 + b2);
    printf("Addition of c1 and c2: %.3f\n", c1 + c2);
    printf("Concatenation of d1 and d2: %s\n", string_concat);
    printf("Addition of e1 and e2: %u\n", e1 + e2);
    printf("Addition of f1 and f2: %u\n", f1 + f2);

    printf("Subtraction of a1 and a2: %.2f\n", a1 - a2);
    printf("Subtraction of b1 and b2: %d\n", b1 - b2);
    printf("Subtraction of c1 and c2: %.3f\n", c1 - c2);
    printf("Subtraction of e1 and e2: %u\n", e1 - e2);
    printf("Subtraction of f1 and f2: %u\n", f1 - f2);

    printf("Modulus of b1 and b2: %d\n", b1 % b2);
    printf("Division of b1 and b2: %d\n", b1 / b2);
    printf("Multiplication of b1 and b2: %d\n", b1 * b2);

    // Relational
    printf("Greater than operator 5 > 10 is %d\n", b1 > b2);
    printf("Less than operator 5 < 10 is %d\n", b1 < b2);
    printf("Greater than or equal to operator 5 >= 10 is %d\n", b1 >= b2);
    printf("Less than or equal to operator 5 <= 10 is %d\n", b1 <= b2);
    printf("Equals to operator 5 == 10 is %d\n", b1 == b2);
    printf("Not Equals to operator 5 != 10 is %d\n", b1 != b2);
    
    // Logical
    printf("Logical AND (b1 && b2): %d\n", b1 && b2);
    printf("Logical OR (b1 || b2): %d\n", b1 || b2);
    printf("Logical NOT (!b1): %d\n", !b1);

    // Bitwise
    printf("Bitwise AND (b1 & b2): %d\n", b1 & b2);
    printf("Bitwise OR (b1 | b2): %d\n", b1 | b2);
    printf("Bitwise XOR (b1 ^ b2): %d\n", b1 ^ b2);

    // Assignment
    printf("Assignment Addition (b1 += b2): %d\n", b1 += b2);
    printf("Assignment Subtraction (b1 -= b2): %d\n", b1 -= b2);
    printf("Assignment Multiplication (b1 *= b2): %d\n", b1 *= b2);
    printf("Assignment Division (b1 /= b2): %d\n", b1 /= b2);


    //Operations on Char

     // Relational
    printf("Greater than operator d1 > d2 is %d\n", d1 > d2);
    printf("Less than operator d1 < d2 is %d\n", d1 < d2);
    printf("Greater than or equal to operator d1 >= d2 is %d\n", d1 >= d2);
    printf("Less than or equal to operator d1 <= d2 is %d\n", d1 <= d2);
    printf("Equals to operator d1 == d2 is %d\n", d1 == d2);
    printf("Not Equals to operator d1 != d2 is %d\n", d1 != d2);

    // Logical
    printf("Logical AND (d1 && d2): %d\n", d1 && d2);
    printf("Logical OR (d1 || d2): %d\n", d1 || d2);
    printf("Logical NOT (!d1): %d\n", !d1);


    //  operations on floor datatype


    //Lofical
    printf("Logical AND (b1 && b2): %d\n", b1 && b2);
    printf("Logical OR (b1 || b2): %d\n", b1 || b2);
    printf("Logical NOT (!b1): %d\n", !b1);

    // Bitwise
    printf("Bitwise AND (b1 & b2): %d\n", b1 & b2);
    printf("Bitwise OR (b1 | b2): %d\n", b1 | b2);
    printf("Bitwise XOR (b1 ^ b2): %d\n", b1 ^ b2);
    return 0;
}
