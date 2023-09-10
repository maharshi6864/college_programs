// 11.		Write a program to Print
// 1
// 23
// 456
// 78910

#include <stdio.h>
int main()
{

    int no;
    int i;
    printf("Enter number of rows:  ");
    scanf("%d", &no);
    int counter = 1;
    for (i = 1; i <= no; i++)
    {
        int j;
        for (j = 1; j <= i; j++)
        {
            printf("%d", counter);
            counter++;
        }

        printf("\n");
    }
    return 0;
}