// Write a program to Print an two dimensional array.

#include <stdio.h>

int main()
{
    int array[2][3] = {{1, 2, 3}, {4, 5, 6}};

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d \n", array[i][j]);
        }
    }
}