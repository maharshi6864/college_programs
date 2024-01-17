#include <stdio.h>

int main()
{
    char buffer;
    FILE *fp1;
    fp1 = fopen("11.txt", "w+");
    puts("enter a character to write in File : ");
    scanf("%c", &buffer);
    fputc(buffer, fp1);
    rewind(fp1);
    printf("Out Put from file 11.txt : \"%c\"", fgetc(fp1));
    fclose(fp1);
}
