/*
    Program: Binary to Decimal Converter
    Description:
        This C program takes a binary number as input from the user,
        and converts it into its decimal equivalent using mathematical logic.

        The logic:
        Each digit of a binary number (0 or 1) is multiplied by 2 raised to its positional power.
        The result is the sum of all these values.

        For example:
        Binary: 1011
        Decimal = (1 * 2^3) + (0 * 2^2) + (1 * 2^1) + (1 * 2^0)
                = 8 + 0 + 2 + 1 = 1
*/

#include <stdio.h>
#include <math.h>

int main()
{
    long long binary;     // User inputs binary as a long long number (can be big)
    int decimal = 0;      // Final decimal result
    int base = 1;         // Represents powers of 2 (starts from 2^0)
    int rem;              // Holds remainder during calculation

    // Get binary input
    printf("Enter a binary number: ");
    scanf("%lld", &binary);

    // Loop to process each binary digit
    while (binary != 0)
    {
        rem = binary % 10;            // Extract rightmost digit
        decimal = decimal + rem * base; // Add its decimal value
        binary = binary / 10;         // Remove rightmost digit
        base = base * 2;              // Move to the next power of 2
    }

    // Output the result
    printf("The decimal equivalent is: %d\n", decimal);

    return 0;
}
