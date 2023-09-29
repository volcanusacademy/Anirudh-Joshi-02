#include <stdio.h>

// Function to calculate the volume of a cuboid
double calculateVolume(double length, double width, double height) 
{
    return length * width * height;
}

int main() 
{
    double length, width, height;

    // Input cuboid dimensions from the user
    printf("Enter the length of the cuboid: ");
    scanf("%lf", &length);

    printf("Enter the width of the cuboid: ");
    scanf("%lf", &width);

    printf("Enter the height of the cuboid: ");
    scanf("%lf", &height);

    // Calculate volume using the function
    double volume = calculateVolume(length, width, height);

    // Display the calculated volume
    printf("Volume of the cuboid: %.2lf\n", volume);

    return 0;
}
