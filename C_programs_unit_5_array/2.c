// Write a program to read and print single dimesional array.

#include <stdio.h>

int main()
{
    int array[10];

    for (int i = 0; i <= 9; i++)
    {
        scanf("%d", &array[i]);
    }
    for (int i = 0; i <= 9; i++)
    {
        printf("%d \n", array[i]);
    }
}