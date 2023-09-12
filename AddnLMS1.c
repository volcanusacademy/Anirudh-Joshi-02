
#include <stdio.h>
void main() 
{
    int a, b;  // Declare variables to store two integers

    // Prompt the user to input two numbers
    printf("Enter the two numbers you want to add: \n");

    // Read two integers from the user
    scanf("%d\n%d", &a, &b);

    int sum = a + b;  // Calculate the sum of the two numbers

    // Display the result (sum) along with the original numbers
    printf("The sum of numbers %d and %d is = %d", a, b, sum);
}
