/*
 * Program Title: Add Two Numbers Without '+' Operator
 *
 * Description:
 * This C program adds two integers using a while loop instead of the '+' operator.
 * It repeatedly increments the first number (x) and decrements the second number (y)
 * until y becomes zero. Each decrement from y corresponds to an increment to x.
 * 
 * Example:
 * If x = 4 and y = 3:
 *   - Loop runs 3 times.
 *   - Each time, x increases by 1, y decreases by 1.
 *   - Final x = 7 → which is the correct sum.
 * 
 * Constraints: Only works correctly for non-negative y.
 */


#include <stdio.h>

int main()
{
    int x, y;

    // Ask the user to input two integers
    printf("Enter the two numbers you want to add: ");
    scanf("%d %d", &x, &y);

    // Loop until y becomes zero
    // Each iteration: increment x and decrement y
    while(y != 0)
    {
        x++;    // Simulates adding 1 to x
        y--;    // Simulates subtracting 1 from y
    }

    // When y reaches 0, x contains the sum
    printf("Sum of the values is %d\n", x);
    return 0;
}
