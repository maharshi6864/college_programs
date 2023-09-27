// Write a program to enter five numbers using array and rearrange the array in
// the reverse order.

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

    for (int i = 9; i >= 0; i--)
    {
        printf("%d\n", a[i]);
    }
}