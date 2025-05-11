#include <stdio.h>

int main() {
    int number_of_days, start_day;

    printf("Enter number of days in month: ");
    scanf("%d", &number_of_days);

    printf("Enter starting day of the week (1=Sun, 7=Sat): ");
    scanf("%d", &start_day);

    // Print initial spaces for the first week
    for (int i = 1; i < start_day; i++) {
        printf("   ");  // Three spaces per day for alignment
    }

    // Print the days of the month
    for (int day = 1; day <= number_of_days; day++) {
        printf("%2d ", day);

        // Check if current position is the last day of the week
        if ((day + start_day - 1) % 7 == 0) {
            printf("\n");
        }
    }

    printf("\n");
    return 0;
}
