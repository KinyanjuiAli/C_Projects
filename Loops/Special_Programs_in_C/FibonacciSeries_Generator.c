/*
    Program: Fibonacci Series Generator
    Description: This program prints the Fibonacci series up to 'n' terms.
                 A Fibonacci series is a sequence where each number is the
                 sum of the two preceding ones, starting from 0 and 1.
                 For example: 0, 1, 1, 2, 3, 5, 8, ...
*/

#include <stdio.h>

int main()
{
    // Declare variables
    int n;                  // Number of Fibonacci terms to print
    int first = 0;          // First Fibonacci number
    int second = 1;         // Second Fibonacci number
    int next;               // Variable to hold the next number in the sequence

    // Ask user for input
    printf("Enter how many Fibonacci numbers to print: ");
    scanf("%d", &n);

    // Display the Fibonacci series
    printf("Fibonacci Series: ");

    for(int i = 0; i < n; i++)
    {
        // Print the current term
        printf("%d ", first);

        // Calculate the next term
        next = first + second;

        // Shift the values for next iteration
        first = second;
        second = next;
    }

    return 0;
}

