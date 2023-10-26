// 10.		Write a program to Print
// 1
// 22
// 333
// 4444
// 55555

#include <stdio.h>
int main()
{

    int no;
    int i;
    printf("Enter number of rows:  ");
    scanf("%d", &no);

    for (i = 1; i <= no; i++)
    {
        int j;
        for (j = 1; j <= i; j++)
        {
            printf("%d", i);
        }

        printf("\n");
    }
    return 0;
}