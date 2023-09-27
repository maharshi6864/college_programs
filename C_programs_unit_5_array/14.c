// Write a program to Add of All Array Elements

#include <stdio.h>

int main()
{
    int array[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int ad;
    printf("Enter the number you want to add to each and every element of the array :");
    scanf("%d", &ad);

    for (int i = 0; i <= 8; i++)
    {
        printf("%d \n", array[i] + ad);
    }
}