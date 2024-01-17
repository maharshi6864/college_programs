#include <stdio.h>
#include <string.h>

int main()
{
    char str[40] = {"guijbvbh4543rgfedfdw"};
    int lenn = strlen(str);
    for (int i = 0; i < lenn; i++)
    {
        printf("%c \n", str[i]);
    }
}