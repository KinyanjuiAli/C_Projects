/**
 * @file number_to_words.c
 * @brief Converts a two-digit number to its English word representation
 * @author Your Name
 * @date May 10, 2025
 * 
 * This program demonstrates the use of switch statements in C by converting
 * a user-entered two-digit number into its English word representation.
 * It handles special cases for teens (11-19) and properly formats other
 * two-digit numbers.
 */

 #include <stdio.h>

 int main() {
     // Variable declarations
     int number;          // To store the user input
     int firstDigit;      // To store the tens place
     int secondDigit;     // To store the ones place
     
     // Prompt user for input
     printf("Enter a two-digit number: ");
     scanf("%d", &number);
     
     // Input validation - ensure number is two digits (10-99)
     if (number < 10 || number > 99) {
         printf("Error: That's not a two-digit number!\n");
         return 1;  // Exit with error code
     }
     
     // Echo the input back to user
     printf("You entered the number ");
     
     /**
      * Handle special cases for numbers 11-19 (teens)
      * These have unique names that don't follow the regular pattern
      */
     if (number >= 11 && number <= 19) {
         switch (number) {
             case 11:
                 printf("eleven.\n");
                 break;
             case 12:
                 printf("twelve.\n");
                 break;
             case 13:
                 printf("thirteen.\n");
                 break;
             case 14:
                 printf("fourteen.\n");
                 break;
             case 15:
                 printf("fifteen.\n");
                 break;
             case 16:
                 printf("sixteen.\n");
                 break;
             case 17:
                 printf("seventeen.\n");
                 break;
             case 18:
                 printf("eighteen.\n");
                 break;
             case 19:
                 printf("nineteen.\n");
                 break;
         }
     } else {
         // For all other numbers (10, 20-99), split into digits and process separately
         firstDigit = number / 10;    // Integer division to get tens place
         secondDigit = number % 10;   // Modulo to get ones place
         
         // First switch: handle tens place (first digit)
         switch (firstDigit) {
             case 1:
                 printf("ten");   // This will only execute for the number 10
                 break;
             case 2:
                 printf("twenty");
                 break;
             case 3:
                 printf("thirty");
                 break;
             case 4:
                 printf("forty");
                 break;
             case 5:
                 printf("fifty");
                 break;
             case 6:
                 printf("sixty");
                 break;
             case 7:
                 printf("seventy");
                 break;
             case 8:
                 printf("eighty");
                 break;
             case 9:
                 printf("ninety");
                 break;
         }
         
         // Second switch: handle ones place (second digit)
         switch (secondDigit) {
             case 0:
                 printf(".\n");  // No hyphen needed for multiples of 10
                 break;
             case 1:
                 printf("-one.\n");
                 break;
             case 2:
                 printf("-two.\n");
                 break;
             case 3:
                 printf("-three.\n");
                 break;
             case 4:
                 printf("-four.\n");
                 break;
             case 5:
                 printf("-five.\n");
                 break;
             case 6:
                 printf("-six.\n");
                 break;
             case 7:
                 printf("-seven.\n");
                 break;
             case 8:
                 printf("-eight.\n");
                 break;
             case 9:
                 printf("-nine.\n");
                 break;
         }
     }
     
     return 0;  // Program executed successfully
 }