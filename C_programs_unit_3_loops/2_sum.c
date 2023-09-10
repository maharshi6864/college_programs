#include <stdio.h>

int main()
{

    int no;
    printf("Enter number for its sum:  ");
    scanf("%d", &no);
    int i, sum = 0;
    ;
    for (i = 0; i <= no; i++)
    {
        sum = sum + i;
    }
    printf("Sumof given number %d is %d", no, sum);
    return 0;
}