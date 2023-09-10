// Odd and Even sequence with no arguments and no return (NANR)

#include <stdio.h>

void oddAndEvenSequence()
{

    int start, end;
    printf("Enter the start number :   ");
    scanf("%d", &start);
    printf("Enter the end number :   ");
    scanf("%d", &end);
    int ne = end;
    int i = start;
    int ns = start;
    for (i; i <= end; i++)
    {
        if (i % 2 == 0)
        {
            printf("%d is an Even\n", i);
        }
        else
        {
            printf("%d is an Odd\n", i);
        }
    }

    printf("This was the Odd and Even numbers between %d to %d ", ns, ne);
}

int main()
{

    oddAndEvenSequence();
    return 0;
}
