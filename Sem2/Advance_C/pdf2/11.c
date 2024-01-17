#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    float match = 0.0, notMatch = 0.0;
    float percentage = 0.0;
    char a[50] = {"this is me writing solutions over here"};
    char b[50] = {"this is me writing solutions over here"};
    if ((int)strlen(a) == (int)strlen(b))
    {
        for (int i = 0; i < (int)strlen(a); i++)
        {
            if (a[i] == b[i])
            {
                match++;
            }
            else
            {
                notMatch++;
            }
        }
        percentage = (match / (match + notMatch)) * 100;
        printf("String Matches %.2f", percentage);
    }
    else
    {
        printf("Size of String does't match");
    }
}