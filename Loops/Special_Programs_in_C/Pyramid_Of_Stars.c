/*
----------------------------------------------------------
C Program to Print a Pyramid of Stars Based on User Input
----------------------------------------------------------

How It Works:

1. The program first asks the user how many rows (n) they want in the pyramid.
2. It uses two nested loops:
   - Outer loop (`i`) controls the row number.
   - Inner loop (`j`) controls printing characters in each row.
3. The pyramid width is `2*n - 1` columns to ensure symmetry.
4. The condition inside the inner loop checks whether to print a star `*` or a space ` `:
   - Stars are printed between the positions `n - (i - 1)` and `n + (i - 1)`.
   - This centers the pyramid and increases star count as rows go down.
5. After printing each row, a newline is added to move to the next line.

Example:
If n = 3, output will be:
  *  
 *** 
*****

----------------------------------------------------------
*/

#include <stdio.h>

int main()
{
    int n, j, i;

    // Ask the user how many rows they want in the pyramid
    printf("How many Rows you want in your pyramid?\n");
    scanf("%d", &n);

    // Outer loop for each row (from 1 to n)
    for (i = 1; i <= n; i++)
    {
        // Inner loop for each column in the row (from 1 to 2n-1)
        for (j = 1; j <= 2 * n - 1; j++)
        {
            // Check if the current column should have a star
            // Stars start from (n - (i - 1)) to (n + (i - 1))
            if (j >= n - (i - 1) && j <= n + (i - 1))
            {
                printf("*");
            }
            else 
            {
                // Otherwise print a space to shape the pyramid
                printf(" ");
            }
        }

        // Move to the next line after each row is printed
        printf("\n");
    }

    return 0;
}
