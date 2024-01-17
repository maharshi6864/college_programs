#include <stdio.h>

int main()
{
    char str[40] = {"wertyuiuyreweryuytrertyytreweryuy"};
    char ch = 'y';
    int frequency = 0;
    for (int i = 0; str[i] != '\0' && str[i] != '\n'; i++)
    {
        if (ch == str[i])
        {
            frequency++;
        }
    }
    printf("Frequency for character %c in String %s is %d", ch, str, frequency);
}