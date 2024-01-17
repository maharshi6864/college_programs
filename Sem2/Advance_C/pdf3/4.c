#include <stdio.h>
#include <string.h>

int main()
{
    char buffer[100], text1[10000], text2[10000];

    FILE *fp1;
    FILE *fp2;
    FILE *fp3;
    fp1 = fopen("test.txt", "r");
    fp2 = fopen("tani.txt", "r");
    fp3 = fopen("test4.txt", "w");
    strcat(text1, "--Text from First File--\n");
    while (fgets(buffer, 100, fp1) != NULL)
    {
        strcat(text1, buffer);
    }

    while (fgets(buffer, 100, fp2) != NULL)
    {
        strcat(text2, buffer);
    }
    strcat(text1, "\n--Text from Second File--\n");
    strcat(text1, text2);

    fprintf(fp3, "%s", text1);
    fclose(fp1);
    fclose(fp2);
    fclose(fp3);
}