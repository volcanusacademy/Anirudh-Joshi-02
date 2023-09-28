#include<stdio.h>
// perform addition
float add(float num1, float num2) 
{
    return num1 + num2;
}

// perform subtraction
float subtract(float num1, float num2) 
{
    return num1 - num2;
}

// perform multiplication
float multiply(float num1, float num2) 
{
    return num1 * num2;
}

//perform division
float divide(float num1, float num2) 
{
    if (num2 != 0) 
    {
        return num1 / num2;
    } 
    else 
    {
        printf("Error: Division by zero!\n");
        return 0.0; //for 0
    }
}

int main()
{
    float num1, num2;
    char operator;

    printf("Enter operator (+, -, *, /): ");
    scanf(" %c", &operator);

    printf("Enter two numbers: ");
    scanf("%f %f", &num1, &num2);

    switch (operator) 
    {
        case '+':
            printf("Result: %.2f\n", add(num1, num2));
            break;
        case '-':
            printf("Result: %.2f\n", subtract(num1, num2));
            break;
        case '*':
            printf("Result: %.2f\n", multiply(num1, num2));
            break;
        case '/':
            printf("Result: %.2f\n", divide(num1, num2));
            break;
        default:
            printf("Invalid operator\n");
    }

    return 0;
}
