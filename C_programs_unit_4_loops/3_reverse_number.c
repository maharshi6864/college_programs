#include <stdio.h>

int main()
{

    int i, no;
    printf("Enter number till you have to print in reverse:  ");
    scanf("%d", &i);
    no = i;
    for (i; 0 <= i; i--)
    {
        printf("%d \n", i);
    }
    printf("Numbers were print till %d in reverse", no);
    return 0;
}