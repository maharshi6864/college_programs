// 18.		Write a program to Print

// 				1
// 			1		2
// 		1		2		3
// 	1		2		3		4
// 1		2		3		4		5

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
        int counter = 1;
        int s;
        for (s = no - i; 0 <= s; s--)
        {
            printf(" ");
        }

        int j;
        for (j = 0; j <= i; j++)
        {
            printf("%d ", counter);
            counter++;
        }

        printf("\n");
    }
    return 0;
}