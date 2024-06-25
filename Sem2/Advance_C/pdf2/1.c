#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char str[50] = {"4567tfty76trygvgyu7t&^R$#^FFDYT"};
    int lenn = strlen(str);

    for (int i = 0; i < lenn; i++)
    {
        if (isalpha(str[i]))
        {
            printf("%c is alphabet ! \n", str[i]);
        }
        if (isalnum(str[i]))
        {
            printf("%c is alphanum ! \n", str[i]);
        }
        if (islower(str[i]))
        {
            printf("%c is Lower Case ! \n", str[i]);
        }
        if (isupper(str[i]))
        {
            printf("%c is Upper Case \n", str[i]);
        }
        if (isdigit(str[i]))
        {
            printf("%c is digit \n", str[i]);
        }
        if (isspace(str[i]))
        {
            printf("%c is digit \n", str[i]);
        }
    }
}