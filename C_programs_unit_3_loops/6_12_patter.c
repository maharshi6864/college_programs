// 17.		Write a program to Print
// 54321
// 4321
// 321
// 21
//          1

#include <stdio.h>

int main()
{

    int no;
    int i;
    printf("Enter number of rows:  ");
    scanf("%d", &i);
    ;
    for (i; 1 <= i; i--)
    {
        int j;
        for (j = i; 0 < j; j--)
        {
            printf("%d", j);
        }

        printf("\n");
    }
    return 0;
}