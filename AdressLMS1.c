#include <stdio.h>
#include <string.h>

// Union for employee details
union EmployeeDetails {
    char name[50];
    int age;
    float salary;
};

int main() 
{
    union EmployeeDetails employee;

    // Input employee name
    printf("Enter employee name: ");
    fgets(employee.name, sizeof(employee.name), stdin);
    employee.name[strlen(employee.name) - 1] = '\0'; 

    // Input employee age
    printf("Enter employee age: ");
    scanf("%d", &employee.age);

    // Input employee salary
    printf("Enter employee salary: ");
    scanf("%f", &employee.salary);

    // Display employee details
    printf("\nEmployee Details:\n");
    printf("Name: %s\n", employee.name);
    printf("Age: %d\n", employee.age);
    printf("Salary: %.2f\n", employee.salary);

    return 0;
}

