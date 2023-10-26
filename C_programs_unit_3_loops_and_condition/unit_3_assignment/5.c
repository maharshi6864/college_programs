// Questio-4 Write a program to check whether the given number is odd or even

#include <stdio.h>

int main()
{
    char a;
    printf("Enter a Character:");
    scanf("%c", &a);
    if (a == 'a' || a == 'e' || a == 'i' || a == 'o' || a == 'u' || a == 'A' || a == 'E' || a == 'I' || a == 'O' || a == 'U')
    {
        printf("Character is Vowel");
    }
    else
    {
        printf("Character is Constant");
    }
}