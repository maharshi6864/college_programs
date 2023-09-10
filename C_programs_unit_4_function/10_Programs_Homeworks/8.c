// Prime Number sequence with arguments and no return (WANR)

#include <stdio.h>

void primeNumberSequence(int start, int end)
{

    int ne = end;
    int i = start;
    int ns = start;
    for (i; i <= end; i++)
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
            printf("%d is a not prime number \n", i);
        }
    }

    printf("This was the prime numbers between %d to %d ", ns, ne);
}

int main()
{
    int start, end;
    printf("Enter the start number :   ");
    scanf("%d", &start);
    printf("Enter the end number :   ");
    scanf("%d", &end);
    primeNumberSequence(start, end);
    return 0;
}
