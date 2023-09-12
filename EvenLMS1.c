#include <stdio.h>

void main() 
{
    int i, sum = 0;  // Declare variables for loop and sum calculation

    // Loop to iterate through numbers from 1 to 100
    for (i = 1; i <= 100; i++) 
    {
        // Check if the current number (i) is even
        if (i % 2 == 0) 
        {
            sum += i;  // Add the even number to the sum
        }
    }

    // Display the sum of all even numbers from 1 to 100
    printf("Sum of all even numbers from 1 to 100 is = %d", sum);
}
