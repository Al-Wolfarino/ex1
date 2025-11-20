/******************
Name: Mohamad Deb
ID: 208184606
Assignment: 1
*******************/
#include <stdio.h>

// REMIDER : YOU CANT USE ANY CONTROL FLOW OPERATIONS OR FUNCTIONS, ONLY BITWISE. not even "==, &&, ||, !="

int main()
{
    char a;
    int num, num1, num2, num3;
    int shift_val, right_shift, left_shift;
    int oct_num, hex_num;
    // Ascii
    printf("Ascii:\n");
    /*. Scan one character from the user.
        Then, refer to it as an integer.
        a. Print its value.
        b:
        Print “0”, if its integer representation is even.
        print “1” if its integer representation is odd. */
     printf("Please enter a character\n");
        a= getchar();
    printf("Its numerical value is: %d\n", a);
    printf("0 for even, 1 for odd: %d\n", (a & 1));

    printf("\n");

    // 2's complement and other representations
    printf("\n2's complement to other representations:\n");
    /*. Scan a negative integer. [2’s complement].
        Print its value in 1’s complement.
        Print its value as unsigned. */
    printf("Please enter a negative integer\n");
    scanf("%d", &num);

    printf("1's complement: %d\n", -(-num - 1));
    printf("unsigned: %u\n", (unsigned int)num);

    printf("\n");

    // Shifting right and left
    printf("\nShifting right and left:\n");
    /*. Scan 3 integers.
        The first one - the value you will play with.
        The second and the third - how much to shift right and left, respectively.
        Print the value after shifting right and then shifting left. */
    printf("Please enter 3 integers\n");
    scanf("%d %d %d", &shift_val, &right_shift, &left_shift);

    printf("After shifting right and left: %d\n", (shift_val >> right_shift) << left_shift);

    printf("\n");
    // Even - Odd
    printf("\nEven - Odd:\n");
    /* Scan 3 Integers.
    If at least two of them are even - print 0.
    If at least two of them are odd - print 1. */
    printf("Please enter 3 integers\n");
    scanf("%d %d %d", &num1, &num2, &num3);
    int bit1 = num1 & 1;
    int bit2 = num2 & 1;
    int bit3 = num3 & 1;
    int odd_count = bit1 + bit2 + bit3;
    int output = (odd_count >> 1) & 1;
    printf("0 - most of them are even, 1 - most of them are odd: %d\n", output);
    printf("\n");
    // Different Bases
    printf("\nDifferent Bases:\n");
    /*  Scan two numbers:
        One in octal base, one in Hexadecimal base.
        Print their LSB’s.
        Print their MSB’s. */
    printf("Please enter two numbers in octal and hexadecimal bases\n");
    scanf("%o %x", &oct_num, &hex_num);

    printf("LSBs: %d %d\n", oct_num & 1, hex_num & 1);
    printf("MSBs: %d %d\n", (oct_num >> 31) & 1, (hex_num >> 31) & 1);

    printf("Bye!\n");

    return 0;
}
