// . Write a Program to sort an Array in ascending order

#include <stdio.h>

int main()
{
    int a[10] = {
        1,
        2,
        3,
        74,
        5,
        6,
        7,
        10,
        8,
        9,
    };

    int temp = 0;
    int total = 0;
    for (int i = 0; i <= 9; i++)
    {
        for (int j = i + 1; j <= 9; j++)
        {
            if (a[i] > a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }

    for (int i = 0; i <= 9; i++)
    {
        printf("%d\n", a[i]);
    }
}