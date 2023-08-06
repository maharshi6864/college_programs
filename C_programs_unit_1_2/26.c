// Question 26
//  Write a program to print character of a particular ascii value.

#include <stdio.h>

int main()
{
    char asciiValue;

    printf("Enter an ASCII value : ");
    scanf("%c", &asciiValue);

    printf("ASCII value for Character '%c' is %d\n", asciiValue, (int)asciiValue);

    return 0;
}