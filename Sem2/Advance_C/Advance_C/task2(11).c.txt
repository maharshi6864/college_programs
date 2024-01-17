#include <stdio.h>
#define SIZE 100

int main() {
    char str1[SIZE], str2[SIZE];
    int i = 0;

    printf("Enter the first string: ");
    fgets(str1, sizeof(str1), stdin);

    printf("Enter the second string: ");
    fgets(str2, sizeof(str2), stdin);

    while (str1[i] == str2[i]) {
        if (str1[i] == '\0' || str2[i] == '\0')
            break;
        i++;
    }

    if (str1[i] == '\0' && str2[i] == '\0')
        printf("The strings are equal.\n");
    else
        printf("The strings are not equal.\n");

    return 0;
}
