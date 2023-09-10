// 20.		Write a program to Print

// 				*
// 			*		*
// 		*		*		*
// 	*		*		*		*
// *		*		*		*		*
// 	*		*		*		*
// 		*		*		*
// 			*		*
// 				*

#include <stdio.h>

int main()
{

    int no;
    printf("Enter number of rows:  ");
    scanf("%d", &no);
    int i;
    ;
    for (i = no; 1 < i; i--)
    {

        int j;
        for (j = 1; j < i; j++)
        {
            printf("  ");
        }
        int s;
        for (s = no - i; 0 <= s; s--)
        {
            printf(" *  ");
        }

        printf("\n");
    }

    for (i = 1; i <= no; i++)
    {

        int j;
        for (j = 1; j < i; j++)
        {
            printf("  ");
        }
        int s;
        for (s = no - i; 0 <= s; s--)
        {
            printf(" *  ");
        }

        printf("\n");
    }
    return 0;
}