#include <stdio.h>
// Function to calculate the square of a number
int calculateSquare(int number) 
{
    return number * number;
}

int main() 
{
    int num;
            // Input a number from the user
    printf("Enter a number: ");
    scanf("%d", &num);

            // Calculate square using the function
    int square = calculateSquare(num);

    // Display the calculated square
    printf("Square of %d: %d\n", num, square);

    return 0;
}
