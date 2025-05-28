#include <stdio.h>

int main()
{
    int number;  // Variable to store user input
    printf("Enter the number: ");  // Prompt for input
    scanf("%d", &number);  // Read number from user

    int i, rem, sum = 0;  // Declare variables

    // Loop through numbers from 1 to number-1
    for(i = 1; i < number; i++)
    {
        rem = number % i;  // Check if i is a divisor
        if(rem == 0)
        {
            sum = sum + i;  // Add divisor to sum
        }      
    } 

    // Check if sum of divisors equals the number
    if(sum == number)
        printf("%d is a perfect number", number);
    else
        printf("%d is not a perfect number", number);
}
