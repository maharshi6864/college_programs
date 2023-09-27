// Write a program to Print an two dimensional array.

#include <stdio.h>

int main()
{
    int array[2][3];

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Enter value of array of index %d on index %d \n", i, j);
            scanf("%d", &array[i][j]);
        }
    }

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("value of array of index %d on index %d is %d \n", i, j, array[i][j]);
        }
    }
}