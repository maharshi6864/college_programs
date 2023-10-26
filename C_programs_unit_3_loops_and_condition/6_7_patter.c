// 12.		Write a program to Print
// A
// AB
// ABC
// ABCD
// ABCDE

#include <stdio.h>

int main()
{

    char nu;
    printf("Enter number of rows in Character in upper case only :  ");
    scanf("%c", &nu);

    printf("In it");
    int i;
    int no = nu - 65 + 1;

    for (i = 0; i <= no; i++)
    {
        int j;
        char counter = 'A';
        for (j = 1; j <= i; j++)
        {
            printf("%c", counter);
            counter++;
        }

        printf("\n");
    }

    return 0;
}