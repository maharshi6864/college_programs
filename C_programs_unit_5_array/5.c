// Write a program to print three dimesional array.

#include <stdio.h>

int main()
{
    int array[2][3][4] = {{{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 55}}, {{12, 13, 14, 15}, {16, 17, 18, 19}, {20, 21, 22, 23}}};

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