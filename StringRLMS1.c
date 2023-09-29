#include <stdio.h>
#include <string.h>
void reverseString(char str[]) 
{
    int length = strlen(str);

    for (int i = length - 1; i >= 0; i--) {
        printf("%c", str[i]);
    }
    printf("\n");
}

int main() 
{
    char inputString[100];

    printf("Enter a string: ");
    scanf("%s", inputString);

    printf("Reversed string: ");
    reverseString(inputString);

    return 0;
}
