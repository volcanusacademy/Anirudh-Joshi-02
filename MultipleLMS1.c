#include <stdio.h>
void main() 
{
    int a, i;

    // Input a number from the user
    printf("Enter a number: ");
    scanf("%d", &a);

    // Iterate through numbers from 0 to the entered number
    for (i = 0; i <= a; i++) 
    {
        if (i % 3 == 0) 
        {
            printf(" "); // Print a space if the number is divisible by 3
        } 
        else 
        {
            printf("%d\n", i); // Print the number if it's not divisible by 3
        }
    }
}
