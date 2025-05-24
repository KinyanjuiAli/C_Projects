/*
----------------------------------------------------------
C Program to Check for Strong Numbers
----------------------------------------------------------

What It Does:
1. Takes a number from the user.
2. Breaks the number down digit by digit.
3. Calculates the factorial of each digit.
4. Adds all the factorials.
5. Compares the sum to the original number:
   - If equal → Strong number ✅
   - Else → Not a strong number ❌

Example:
Input: 145 → 1! + 4! + 5! = 145 → Strong number
Input: 123 → 1! + 2! + 3! = 9 → Not a strong number

----------------------------------------------------------
*/

#include <stdio.h>

int main()
{
    int n, q, fact = 1, result = 0, rem;

    // Ask the user for input
    printf("Please enter the number: ");
    scanf("%d", &n);

    q = n; // Store the original number for comparison

    // Loop to process each digit
    while (q != 0)
    {
        rem = q % 10; // Extract last digit

        // Calculate factorial of the digit
        for (int i = 1; i <= rem; i++)
        {
            fact = fact * i;
        }

        // Add the factorial to the result
        result = result + fact;

        // Reset factorial for next digit
        fact = 1;

        // Remove last digit
        q = q / 10;
    }

    // Compare the result to the original number
    if (result == n)
    {
        printf("%d is a strong number\n", n);
    }
    else
    {
        printf("%d is not a strong number\n", n);
    }

    return 0;
}
