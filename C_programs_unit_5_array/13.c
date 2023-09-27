// Write a program to insert an element in an Array at given position.

#include <stdio.h>

int main()
{
    int a[11] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    int pos = 0;
    int value;
    printf("Enter the postion of the element you wantt to insert : ");
    scanf("%d", &pos);
    printf("Enter the value you want to enter in postion you have entered :");
    scanf("%d", &value);

    for (int i = 10; i >= pos - 1; i--)
    {
        a[i + 1] = a[i];
    }
    a[pos - 1] = value;

    for (int i = 0; i <= 11; i++)
    {
        printf("%d \n", a[i]);
    }
}