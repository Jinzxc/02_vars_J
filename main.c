#include <stdio.h>

// Just a simple variable test

int main()
{
    // Printing uninitiated variable
    char a;
    printf("Printing uninitiated variable a: %d\n\n", a);
    // Gave back a memory address (random?)

    // Test unsigned values
    unsigned char b = -1;
    printf("Unsigned value of char -1: %d\n", b);
    // Gave back a value of 255

    unsigned short c = -1;
    printf("Unsigned value of short -1: %d\n\n", c);
    // Gave back a value of 65535

    // Test the bounds of values
    char d = 128; // Cannot go up to 2^8 - 1 because it is signed
    printf("Value of char 128: %d\n", d);
    // Overflowed into a -128

    d = -129;
    printf("Value of char -129: %d\n\n", d);
    // Overflowed into a 127

    // Precision of floats
    float euler = 2.7182818284590452353602874713527;
    printf("Double of euler's number: %f\n", euler);
    // 6 decimals places

    // Adding different data types
    short x = 12345;
    char y = 45;
    
    printf("x (short) + y (char) = %d", x + y);
    // Gave back a 12390

    return 0;
}