#include <stdio.h>

int main()
{

    int no;
    printf("Enter number for its sum:  ");
    scanf("%d", &no);
    int i;
    for (i = 1; i <= 10; i++)
    {
        printf("%d X %d = %d \n", no, i, (i * no));
    }
    printf("The Above was the multiplication table for number %d", no);
    return 0;
}