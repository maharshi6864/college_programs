#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char buffer;

    FILE *fp1;
    fp1 = fopen("test4.txt", "r");
    printf("--Content in UpperCase--\n");
    while ((buffer = fgetc(fp1)) != EOF)
    {
        printf("%c", toupper(buffer));
    }
    rewind(fp1);
    printf("--Content in LowerCase--\n");
    while ((buffer = fgetc(fp1)) != EOF)
    {
        printf("%c", tolower(buffer));
    }
    return 0;
}
