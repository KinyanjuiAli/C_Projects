/*
----------------------------------------------------------
C Program to Check if a Number is a Palindrome
----------------------------------------------------------

What It Does:
1. Takes an integer input from the user.
2. Reverses the number using a loop and stores it.
3. Compares the reversed number to the original:
   - If they're equal, it's a palindrome.
   - If not, it's not a palindrome.

Example:
Input: 121 → Output: The number is a palindrome.
Input: 123 → Output: The number is not a palindrome.

Key Concept:
A palindrome is a number that reads the same backward as forward.

----------------------------------------------------------
*/

#include <stdio.h>

int main()
{
    int result = 0, q, rem, n;

    // Ask the user to enter a number
    printf("Please enter the number: ");
    scanf("%d", &n);

    // Store the original number in 'q' for processing
    q = n;

    // Loop to reverse the digits of the number
    while (q != 0)
    {
        rem = q % 10;               // Get the last digit
        result = 10 * result + rem; // Build the reversed number
        q = q / 10;                 // Remove the last digit
    }

    // Compare the reversed number to the original
    if (result == n)
        printf("The number is a palindrome.\n");
    else
        printf("The number is not a palindrome.\n");

    return 0;
}
