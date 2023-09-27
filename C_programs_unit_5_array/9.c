// Write a program to find the largest element of an Array

#include <stdio.h>

int main()
{
    int a[10] = {1, 2, 3, 74, 5, 6, 7, 8, 9, 10};

    int total = 0;
    for (int i = 0; i <= 9; i++)
    {
        if (total < a[i])
        {
            total = a[i];
        }
    }
    printf("%d largest element in an arrray", total);
}