/*
    Program: Floyd's Triangle Generator
    Description: This program prints Floyd's Triangle for a given number of rows.
                 Floyd's Triangle is a right-angled triangle formed by
                 consecutive natural numbers starting from 1.
                 Each row contains one more number than the previous.

    Author: Hussein
    Date: [Insert Date]
*/

#include <stdio.h>

int main()
{
    int rows;       // Number of rows in the triangle
    int num = 1;    // Starting number to print

    // Ask user for the number of rows
    printf("Enter the number of rows for Floyd's Triangle: ");
    scanf("%d", &rows);

    // Loop through each row
    for (int i = 1; i <= rows; i++)
    {
        // Loop to print numbers in each row
        for (int j = 1; j <= i; j++)
        {
            printf("%d ", num);  // Print current number
            num++;               // Increment number for next print
        }
        printf("\n"); // Move to the next line after each row
    }

    return 0;
}
