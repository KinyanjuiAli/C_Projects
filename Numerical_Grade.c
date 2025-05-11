#include <stdio.h>

int main() {
    int grade;
    printf("Enter numerical grade (0-100): ");
    scanf("%d", &grade);

    if (grade < 0 || grade > 100) {
        printf("Error: Invalid grade.\n");
        return 1;
    }

    int tens = grade / 10;

    switch (tens) {
        case 10: // for grade 100
        case 9:
            printf("Letter grade: A\n");
            break;
        case 8:
            printf("Letter grade: B\n");
            break;
        case 7:
            printf("Letter grade: C\n");
            break;
        case 6:
            printf("Letter grade: D\n");
            break;
        case 5:
        case 4:
        case 3:
        case 2:
        case 1:
        case 0:
            printf("Letter grade: F\n");
            break;
        default:
            printf("Error: Invalid grade range.\n");
            break;
    }

    return 0;
}
