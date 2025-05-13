#include <stdio.h>

int main() {
    int n;
    printf("Enter the number of terms (n): ");
    scanf("%d", &n);

    double e = 1.0;        // Start with the first term: 1
    double factorial = 1.0;

    for (int i = 1; i <= n; i++) {
        factorial *= i;           // Update factorial: i!
        e += 1.0 / factorial;     // Add current term to e
    }

    printf("Approximation of e using %d terms: %.15f\n", n, e);

    return 0;
}
