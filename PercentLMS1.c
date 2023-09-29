#include <stdio.h>

void main() 
{
    float percentage;

    // Prompt the user to input the percentage
    printf("Enter the percentage: ");
    scanf("%f", &percentage);

    // Check the percentage range and assign grades accordingly
    if (percentage <= 100 && percentage >= 95) {
        printf("Grade A+\n");  // Excellent
    } else if (percentage < 95 && percentage >= 90) {
        printf("Grade A\n");   // Very Good
    } else if (percentage < 90 && percentage >= 80) {
        printf("Grade B+\n");  // Good
    } else if (percentage < 80 && percentage >= 70) {
        printf("Grade B\n");   // Above Average
    } else if (percentage < 70 && percentage >= 60) {
        printf("Grade C+\n");  // Average
    } else if (percentage < 60 && percentage >= 50) {
        printf("Grade C\n");   // Satisfactory
    } else if (percentage < 50 && percentage >= 40) {
        printf("Grade D\n");   // Below Average
    } else if (percentage < 40 && percentage >= 35) {
        printf("Grade E\n");   // Marginal
    } else {
        printf("Fail\n");      // Fail
    }
}
