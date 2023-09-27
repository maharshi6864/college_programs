// Write a program to Delete an element from an Array

#include <stdio.h>

int main()
{
    int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    int pos = 0;
    printf("Enter the postion of the element you wantt to delete");
    scanf("%d", &pos);

    for (int i = pos - 1; i <= 9; i++)
    {
        a[i] = a[i + 1];
    }

    for (int i = 0; i <= 9 - 1; i++)
    {
        printf("%d \n", a[i]);
    }
}