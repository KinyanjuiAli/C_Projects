/* How it works:
 - Sum is calculated using bitwise XOR (^)
 - Carry is calculated using bitwise AND (&), then left-shifted (<<)
 - This process repeats until carry becomes 0
 - Mimics how binary addition is done at the hardware level using logic gates

 Example:
 Input: x = 7, y = 5
 7 = 0111
 5 = 0101
 XOR = 0010 → Intermediate sum (2)
 AND = 0101 → Carry (shifted to 1010 = 10)
 Repeat until carry = 0

 Final Output: 12
*/

#include <stdio.h>

int main()
{
    int a, b, carry, sum;
    printf("Enter the two numbers you want to add: ");
    scanf("%d %d", &a, &b);

    // Perform bitwise addition using XOR and AND (Half Adder Logic)
    while (b != 0)
    {
        sum = a^b;    // Sum is XOR of bits
        carry = (a & b)<<1;   // Carry is AND of bits and shifted by one so it can be added in next step
        a = sum;         
        b = carry;     
    }

    printf("Sum of the values is %d", a);
    return 0;
}

