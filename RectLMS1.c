#include<stdio.h>
float calculateArea(float length, float breadth) 
{
    return length * breadth;
}

int main() 
{
    float length, breadth;

    // Input length and breadth from the user
    printf("Enter length of rectangle: ");
    scanf("%f", &length);

    printf("Enter breadth of rectangle: ");
    scanf("%f", &breadth);

    // Calculate area using the function
    float area = calculateArea(length, breadth);

    // Display the calculated area
    printf("Area of the rectangle: %.2f square units\n", area);

    return 0;
}
