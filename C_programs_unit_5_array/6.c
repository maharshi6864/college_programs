// Write a program to read and print three dimesional array

#include <stdio.h>

int main()
{
    int array[2][3][4];

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            for (int k = 0; k < 4; k++)
            {
                printf("Enter value of array of index %d on index %d on index %d \n", i, j, k);
                scanf("%d", &array[i][j][k]);
            }
        }
    }

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            for (int k = 0; k < 4; k++)
            {
                printf("value of array of index %d on index %d on index %d is %d \n", i, j, k, array[i][j][k]);
            }
        }
    }
}