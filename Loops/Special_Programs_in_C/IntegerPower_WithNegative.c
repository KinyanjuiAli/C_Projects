/*
    Program: Integer Power Calculator (Supports Negative Exponents)
    Description:
        This program calculates the power of an integer base raised to an exponent.
        It supports both positive and negative exponents.
        For positive exponent: uses repeated multiplication.
        For negative exponent: uses repeated division (reciprocals).

    Example:
        Input: base = 2, exponent = 3   → Output: 2^3 = 8
        Input: base = 2, exponent = -2  → Output: 2^-2 = 0.250000
*/

#include <stdio.h>

int main()
{
    // Declare variables for base, exponent, and the power result
    int power = 1, base, exponent, expo;
    double power1 = 1.0;  // Used for negative exponent results

    // Input base and exponent
    printf("Enter the base: ");
    scanf("%d", &base);
    printf("Enter the exponent: ");
    scanf("%d", &exponent);

    expo = exponent; // Store original exponent for output formatting

    // If exponent is positive
    if(exponent > 0)
    {
        while(exponent != 0)
        {
            power = power * base; // Multiply base repeatedly
            exponent--;
        }
        printf("%d^%d = %d\n", base, expo, power);
    }
    else
    {
        // If exponent is zero or negative
        while(exponent != 0)
        {
            power1 = power1 * (1.0 / base); // Divide 1.0 by base repeatedly
            exponent++;
        }
        printf("%d^%d = %f\n", base, expo, power1);
    }

    return 0;
}
