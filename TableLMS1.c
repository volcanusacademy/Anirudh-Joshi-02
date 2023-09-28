// This programs prints the table of the input number 

#include <stdio.h>

void main() 
{
    int num, mul, i;  // Declare variables to store number, multiplication result, and loop counter

    // Prompt the user to input the number for which they want to print the table
    printf("Enter the number for which you want to print the table: ");
    scanf("%d", &num);

    // Loop to calculate and print the multiplication table
    for (i = 1; i <= 10; i++) 
    {
        mul = i * num;  // Calculate the multiplication result
        printf("%d * %d = %d", num, i, mul);  // Display the multiplication expression
        printf("\n");  // Move to the next line for the next table entry
    }
}
