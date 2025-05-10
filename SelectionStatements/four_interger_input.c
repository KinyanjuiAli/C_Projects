// A program that finds the largest and  smallest  of four integers entered by the user.
#include <stdio.h>

int main() {
    int a, b, c, d;
    int largest, smallest;

    // Input
    printf("Enter four integers: ");
    scanf("%d %d %d %d", &a, &b, &c, &d);

    // Initialize
    largest = a;
    smallest = a;

    // Only four if statements used
    if (b > largest) largest = b;
    if (c > largest) largest = c;
    if (d > largest) largest = d;

    if (b < smallest) smallest = b;
    if (c < smallest) smallest = c;
    if (d < smallest) smallest = d;

    // Output
    printf("Largest: %d\n", largest);
    printf("Smallest: %d\n", smallest);

    return 0;
}
