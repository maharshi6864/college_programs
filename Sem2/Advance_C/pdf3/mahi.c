#include<stdio.h>
int main()
{
    char str[100];
    FILE *pf1;
    pf1=fopen("mahi.txt", "w");
    gets(str);
    fprintf(pf1,"%s",str);
    fclose(pf1);
}