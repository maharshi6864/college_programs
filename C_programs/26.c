// Write a program to print character of a particular ascii value.

#include <stdio.h>

int main()
{
    int asciiValue;

    printf("Enter an ASCII value : ");
    scanf("%d", &asciiValue);

    printf("Character for ASCII value %d is '%c'\n", asciiValue, (char)asciiValue);

    return 0;
}