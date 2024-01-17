#include <stdio.h>

int main()
{
    char str[40] = {"eghghfs432vdfsdv"};
    int length = 0;
    while (str[length] != '\0' && str[length] != '\n')
    {
        length++;
    }
    printf("Length of the string %s is %d", str, length);
}