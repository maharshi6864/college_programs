#include <stdio.h>

int main()
{
    int distance, liters;

    printf("Enter distance :  ");
    scanf("%d", &distance);
    printf("Enter liters of fuel :");
    scanf("%d", &liters);
    float average = distance / liters;
    printf("Average : %.3f", average);
}