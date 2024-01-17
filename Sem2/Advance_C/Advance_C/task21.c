#include <stdio.h>
#include <ctype.h>

int main() {
    char ch;
    printf("Enter a character: ");
    scanf("%c", &ch);

    if(isalpha(ch)) {
        printf("%c is an alphabetic character.\n", ch);
    } else {
        printf("%c is not an alphabetic character.\n", ch);
    }

    if(isalnum(ch)) {
        printf("%c is an alphanumeric character.\n", ch);
    } else {
        printf("%c is not an alphanumeric character.\n", ch);
    }

    if(isdigit(ch)) {
        printf("%c is a digit.\n", ch);
    } else {
        printf("%c is not a digit.\n", ch);
    }

    if(isspace(ch)) {
        printf("It's a space.\n");
    } else {
        printf("It's not a space.\n");
    }

    if(islower(ch)) {
        printf("%c is a lowercase character.\n", ch);
    } else {
        printf("%c is not a lowercase character.\n", ch);
    }

    if(isupper(ch)) {
        printf("%c is an uppercase character.\n", ch);
    } else {
        printf("%c is not an uppercase character.\n", ch);
    }

    return 0;
}
