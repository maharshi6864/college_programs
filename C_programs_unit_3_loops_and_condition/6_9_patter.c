// 14.		Write a program to Print
// A
// BC
// DEF
// GHIJ
// KLMNL

#include <stdio.h>

int main()
{

    char nu;
    printf("Enter number of rows in Character in upper case only :  ");
    scanf("%c", &nu);

    printf("In it");
    int i;
    int no = nu - 65 + 1;

    char counter = 'A';
    for (i = 0; i <= no; i++)
    {
        int j;
        for (j = 1; j <= i; j++)
        {
            printf("%c", counter);
            counter++;
        }

        printf("\n");
    }
    ++counter;

    return 0;
}