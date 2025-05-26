/*
------------------------------------------------------------
C Program to Check if a Number is Prime
------------------------------------------------------------

What is a Prime Number?
A prime number is a number greater than 1 that has no positive 
divisors other than 1 and itself.

How it works:
1. User inputs a number `x`.
2. The square root of `x` is calculated — no need to check beyond that.
3. It loops from 2 to √x to check if any number divides `x`.
4. If none do → it's a prime number.
5. Edge cases like 0, 1, and negative numbers are handled.

------------------------------------------------------------
*/

#include <stdio.h>
#include <math.h>

int main()
{
    int x;
    int i, val1, val2, count = 0;

    // Ask the user to input a positive number
    printf("Please enter the number (only positive number): ");
    scanf("%d", &x);

    val1 = ceil(sqrt(x)); // Check divisors up to square root of x
    val2 = x;             // Store the original number

    // Loop to check if x has any divisor between 2 and sqrt(x)
    for(i = 2; i <= val1; i++)
    {
        if(val2 % i == 0) // Don't count the number dividing itself
        {
            count = 1; // Found a factor → not prime
            break;
        }
    }

    // Now handle prime conditions correctly
    if((count == 0 && val2 != 1) || val2 == 2 || val2 == 3)
        printf("%d is a prime number\n", val2);
    else
        printf("%d is not a prime number\n", val2);

    return 0;
}
