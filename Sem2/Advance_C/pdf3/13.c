#include <stdio.h>
#include <ctype.h>

int main()
{
    char cont[100];
    char ch;
    int digitCounter = 0, alphaCounter = 0;

    FILE *fp2;
    fp2 = fopen("test.txt", "r");
    while ((ch = fgetc(fp2)) != EOF)
    {
        if (isdigit(ch))
        {
            digitCounter++;
        }
        if (isalpha(ch))
        {
            alphaCounter++;
        }
    }
    printf("There are Total %d Alphabetes and Total %d Digits in test.txt .", alphaCounter, digitCounter);
    fclose(fp2);
}