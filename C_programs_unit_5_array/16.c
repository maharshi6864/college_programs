// Write a program to search an element from an Array

#include <stdio.h>

int main()
{
    int a[9] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int b[9] = {1, 2, 3, 4, 5, 6, 7, 8, 9};

    int find;
    printf("Enter the element you are looking for in an array : ");
    scanf("%d", &find);

    for (int i = 0; i <= 8; i++)
    {
        if (find == a[i])
        {
            printf("Element found at index %d", a[i]);
            break;
        }
    }
}