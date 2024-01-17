#include <stdio.h>

int main()
{
    char str[40] = {"sdgbnngfd2134.;.;"};
    int counter = 0;
    for (int i = 0; str[i] != '\0' && str[i] != '\n'; i++)
    {
        counter++;
    }
    printf("Length of the string is  : %d", counter);
}