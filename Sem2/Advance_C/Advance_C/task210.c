#include <stdio.h>

int main() {
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for(int i = 0; str[i] != '\0' && str[i] != '\n'; ++i) {
        if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u') {
            str[i] = str[i] - 32;
        }
    }

    printf("The string after converting vowels to uppercase is: %s", str);
    return 0;
}
