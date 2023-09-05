// 7.		Write a program to Print
// 1
// 11
// 111
// 1111
// 11111

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
            printf("1");
        }

        printf("\n");
    }
    return 0;
}