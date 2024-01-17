#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char buffer;

    FILE *fp1;
    fp1 = fopen("maha.txt", "a");
    fputs("the sentences of mine are very much fine !!", fp1);
    fclose(fp1);
}
