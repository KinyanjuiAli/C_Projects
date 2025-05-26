#include <stdio.h>  

int main()
{
    int year;  
    printf("Enter a year: ");  // Prompt user for input
    scanf("%d", &year);  // Read year from user

    // Check if year is divisible by 400
    if(year % 400 == 0)
        printf("%d is a leap year.\n", year);
    // If not, check if divisible by 100
    else if(year % 100 == 0)
        printf("%d is not a leap year.\n", year);
    // If not, check if divisible by 4
    else if(year % 4 == 0)
        printf("%d is a leap year.\n", year);
    // If none of the above, it's not a leap year
    else
        printf("%d is not a leap year.\n", year);

    return 0;  // Exit program
}
