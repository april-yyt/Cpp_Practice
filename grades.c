#include <stdio.h>

int main() {
    int grade;
    
    printf("Enter a grade: ");
    scanf("%d", &grade);
    
    grade /= 10;

    switch (grade) {
        // Your switch cases here
        case 9:
            printf("A\n");
            break;
        case 8:
            printf("B\n");
            break;
        // ... and so on for other grades
        default:
            printf("Invalid grade\n");
    }

    return 0;
}
