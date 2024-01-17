#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define ASCII_SIZE 256

int main()
{
    int count[256] = {0};
    char str[500] = {"fghbhyueidh xjdnzfmkaejsadlkBWEFJKABEJHBASJDVBJHBDVABBFABBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBSSDCABLYUBjlhslbfjhbfjhbahhbfuybasdjhjbvhyfcfgyg8767t78ujkl,,../.,mlojjop;./.,o"};
    int max = 0;
    char result;
    for (int i = 0; i < (int)strlen(str); i++)
    {
        count[str[i]]++;
        if (max < count[str[i]])
        {
            max = count[str[i]];
            result = str[i];
        }
    }
    printf("Letters most repeated letter in string is %c and it is repeating %d", result, max);
}