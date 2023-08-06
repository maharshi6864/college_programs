// Question 25
//   Write a program to print ascii value of a character.

#include <stdio.h>

int main()
{
    int asciiValue;

    printf("Enter an ASCII value (integer): ");
    scanf("%d", &asciiValue);

    // Explicitly casting the integer ASCII value to a character will give the corresponding character
    printf("Character for ASCII value %d is  '%c'\n", asciiValue, asciiValue);

    return 0;
}