#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char str[40] = {"Hello World This Is Me Enjoying"};

    for (int i = 0; i < (int)strlen(str); i++)
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] = str[i] + 32;
        }
        else if (str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] = str[i] - 32;
        }
    }
    printf("%s", str);
}
