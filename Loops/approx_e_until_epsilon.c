#include <stdio.h>

int main() {
    double epsilon;
    printf("Enter the threshold epsilon (e.g., 0.00001): ");
    scanf("%lf", &epsilon);

    double e = 1.0;          // Start with 1
    double term = 1.0;       // First term is 1
    double factorial = 1.0;
    int i = 1;

    while (term >= epsilon) {
        factorial *= i;
        term = 1.0 / factorial;
        e += term;
        i++;
    }

    printf("Approximation of e until term < %.10f: %.15f\n", epsilon, e);
    printf("Number of terms used: %d\n", i);

    return 0;
}
