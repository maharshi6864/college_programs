// Write a program to Copy Elements of Array in another Array

#include <stdio.h>

int main()
{
    int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}, b[10];

    for (int i = 0; i < 9; i++)
    {
        b[i] = a[i];
    }

    for (int i = 0; i < 9; i++)
    {
        printf("value of array b of index %d on is %d\n", i, b[i]);
    }
}