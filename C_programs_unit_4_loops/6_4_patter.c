// 9.		Write a program to Print
// 1
// 12
// 123
// 1234
// 12345

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
            printf("%d", j);
        }

        printf("\n");
    }
    return 0;
}

#include <stdio.h>


