/*
----------------------------------------------------------
C Program to Check for Armstrong Numbers
----------------------------------------------------------

What It Does:
1. Takes a number as input from the user.
2. Counts how many digits are in the number.
3. For each digit:
   - Raises it to the power of the total digit count.
   - Adds the result to a running sum.
4. If the sum equals the original number, it's an Armstrong number.

Example:
Input: 153 → 1^3 + 5^3 + 3^3 = 153 → Armstrong ✅
Input: 123 → 1^3 + 2^3 + 3^3 = 36 → Not Armstrong ❌

----------------------------------------------------------
*/

#include <stdio.h>

int main()
{
    int number, mul = 1, count = 0, cnt, rem, result = 0;

    // Prompt user for input
    printf("Please enter the number: ");
    scanf("%d", &number);

    int q = number;

    // Step 1: Count the number of digits in the input
    while (q != 0)
    {
        q = q / 10;
        count++;
    }

    // Reset q to the original number for processing
    cnt = count;
    q = number;

    // Step 2: Process each digit
    while (q != 0)
    {
        rem = q % 10; // Extract the last digit

        // Compute rem^count (digit raised to power of total digits)
        while (cnt != 0)
        {
            mul = mul * rem;
            cnt--;
        }

        // Add the powered digit to the result
        result = result + mul;

        // Reset for next digit
        cnt = count;
        mul = 1;
        q = q / 10; // Remove last digit
    }

    // Step 3: Compare the sum with original number
    if (number == result)
        printf("%d is an Armstrong number.\n", number);
    else
        printf("%d is not an Armstrong number.\n", number);

    return 0;
}
