// WAP to take input from the user and check it is character or digit using
// function and pointers.

#include <stdio.h>

void checkEitherCharacterOrDigit(char *code)
{
  char codee = *code;
  if (codee >= 48 && codee <= 57)
  {
    printf("Entered Character %c is digit.", codee);
  }
  else
  {
    printf("Entered Character %c is character.", codee);
  }
}

int main()
{
  char chh;
  printf("Enter a character to check it is a character or a digit : ");
  scanf("%c", &chh);
  char *chh_ptr = &chh;
  checkEitherCharacterOrDigit(chh_ptr);
}