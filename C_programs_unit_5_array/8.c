// Write a program to Copy Elements of Array in another Array

#include <stdio.h>

int main()
{
    int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    int total = 0;
    for (int i = 0; i < 9; i++)
    {
        total = total + a[i];
    }
    printf("%d", total);
    float average = total / 10;
    printf("Average of all the int values in array is %.2f", average);
}