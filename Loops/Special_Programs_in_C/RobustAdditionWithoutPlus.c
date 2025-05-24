/*  How it works:
 - If y > 0: Increment x and decrement y until y becomes 0.
 - If y < 0: Decrement x and increment y until y becomes 0.
 - This simulates the addition process manually using only increment and decrement operations.

 Example:
 Input: x = 7, y = -3   → Output: 4
 Input: x = -5, y = 10  → Output: 5

 This program avoids using the '+' operator completely, showcasing low-level
 logic building — useful for systems programming and algorithmic thinking.
*/

#include <stdio.h>

int main()
{
    int x, y;

    // Get two integers from user
    printf("Enter the two numbers you want to add: ");
    scanf("%d %d", &x, &y);

    // If y is positive, increment x and decrement y
    if (y > 0)
    {
        while (y != 0)
        {
            x++;    // simulate adding 1
            y--;    // reduce y by 1
        }
    }
    // If y is negative, decrement x and increment y
    else
    {
        while (y != 0)
        {
            x--;    // simulate subtracting 1
            y++;    // move y towards 0
        }
    }

    // Final x holds the correct sum
    printf("Sum of the values is %d\n", x);
    return 0;
}
