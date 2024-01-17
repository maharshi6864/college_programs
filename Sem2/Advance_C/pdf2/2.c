#include <stdio.h>

int main()
{
    char buff[20];

    printf("Enter string :");
    fgets(buff, 20, stdin);
    printf("%s", buff);
    return 0;
}