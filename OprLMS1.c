#include <stdio.h>

void main() 
{
    int a, b, add, sub, multi, division;  // Declare variables to store numbers and results

    // Prompt the user to input two numbers
    printf("Enter the two numbers you want to perform operations on: \n");
    scanf("%d\n%d", &a, &b);

    // Calculate the sum of the two numbers
    add = a + b;
    printf("\nThe sum of the two numbers %d + %d is = %d", a, b, add);

    // Calculate the subtraction of the two numbers
    sub = a - b;
    printf("\nThe subtraction of the two numbers %d - %d is = %d", a, b, sub);

    // Calculate the multiplication of the two numbers
    multi = a * b;
    printf("\nThe multiplication of the two numbers %d * %d is = %d", a, b, multi);

    // Calculate the division of the two numbers
    division = a / b;
    printf("\nThe division of the two numbers %d / %d is = %d", a, b, division);
}

