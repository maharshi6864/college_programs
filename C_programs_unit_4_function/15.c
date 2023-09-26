// Write a Program to Display Prime Numbers between a given range by using Function

#include <stdio.h>

void primeNumber(int start, int end)
{
    for (int i = start; i <= end; i++)
    {
        int counter = 0;
        for (int j = 1; j <= i; j++)
        {
            if (i % j == 0)
            {
                counter++;
            }
        }
        if (counter == 2)
        {
            printf("%d a prime Number  \n", i);
        }
        else
        {
            printf("%d not a prime number \n", i);
        }
    }
}

int main()
{
    int start, end;
    printf("Enter staring range : \n");
    scanf("%d", &start);
    printf("Enter ending range: \n");
    scanf("%d", &end);
    primeNumber(start, end);
}