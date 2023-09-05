// 6.		Write a program to Print
// *
// **
// ***
// ****
// *****

#include <stdio.h>

int main()
{

    int no;
    printf("Enter number of rows:  ");
    scanf("%d", &no);
    int i;
    ;
    for (i = 0; i < no; i++)
    {
        int j;
        for (j = 0; j <= i; j++)
        {
            printf("*");
        }

        printf("\n");
    }
    return 0;
}