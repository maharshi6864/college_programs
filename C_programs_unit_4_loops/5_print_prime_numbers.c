#include <stdio.h>

int main()
{

    int no;
    printf("Enter number for its sum:  ");
    scanf("%d", &no);
    int nu = no;
    int i;
    for (i = 0; i <= no; i++)
    {
        int counter = 0;
        int j;
        for (j = 1; j <= i; j++)
        {
            if (i % j == 0)
            {
                counter++;
            }
        }
        if (counter == 2)
        {
            printf("%d is a prime number \n", i);
        }
        else
        {
        }
    }

    printf("This was the prime numbers between 0 to %d ", nu);
    return 0;
}