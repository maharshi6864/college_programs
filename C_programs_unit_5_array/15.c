// Write a program to Add of two Arrays and store value in third array

#include <stdio.h>

int main()
{
    int a[9] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int b[9] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int c[9];
    for (int i = 0; i <= 8; i++)
    {
        c[i] = a[i] + b[i];
    }

    for (int i = 0; i <= 8; i++)
    {
        printf("%d \n", c[i]);
    }
}