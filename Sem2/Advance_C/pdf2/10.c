#include <stdio.h>
#include <string.h>

int main()
{
    char str[50] = {"hello this is me writing C language here."};
    for (int i = 0; i < (int)strlen(str); i++)
    {
        if (str[i] == 'u' || str[i] == 'o' || str[i] == 'i' || str[i] == 'e' || str[i] == 'a')
        {
            str[i] = str[i] - 32;
        }
    }
    printf("%s", str);
}