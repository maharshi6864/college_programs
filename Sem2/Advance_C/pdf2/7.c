#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char str[40] = {"gyuyyhd\nu335557882d/.;.'..;/hehuigvhsja"};
    int vowel = 0, cont = 0;
    for (int i = 0; i < (int)strlen(str); i++)
    {
        if (isalpha(str[i]))
        {
            if (str[i] == 'U' || str[i] == 'O' || str[i] == 'I' || str[i] == 'E' || str[i] == 'A' || str[i] == 'u' || str[i] == 'o' || str[i] == 'i' || str[i] == 'e' || str[i] == 'a')
            {
                vowel++;
            }
            else
            {
                cont++;
            }
        }
        else
        {
            printf("%c", str[i]);
        }
    }
    printf("Total vowels are %d and total  consonant are %d in a string.", vowel, cont);
}