#include <stdio.h>

int main() 
{
    char operator;           // Variable to store the operator (+, -, *, /)
    double num1, num2, result; // Variables to store two numbers and the result

    // Prompt the user to enter an operator
    printf("Enter an operator (+, -, *, /): ");
    scanf("%c", &operator);

    // Prompt the user to enter two numbers
    printf("Enter two numbers: ");
    scanf("%lf %lf", &num1, &num2);

    // Use a switch statement to perform the selected operation
    switch (operator) 
    {
        case '+':
            result = num1 + num2;
            printf("Result: %.2lf\n", result);
            break;
        case '-':
            result = num1 - num2;
            printf("Result: %.2lf\n", result);
            break;
        case '*':
            result = num1 * num2;
            printf("Result: %.2lf\n", result);
            break;
        case '/':
            if (num2 != 0) 
            {
                result = num1 / num2;
                printf("Result: %.2lf\n", result);
            }
            else 
            {
                printf("Error: Division by zero!\n");
            }
            break;
        default:
            printf("Invalid operator\n");
    }

    return 0;
}

