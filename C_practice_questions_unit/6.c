#include <stdio.h>

int main()
{

    int amount;
    printf("enter an amount : ");
    scanf("%d", &amount);
    int hundreds = 100;
    int hundred_notes = amount / hundreds;
    amount = amount - (hundreds * hundred_notes);
    printf("%d Note(s) of 100.00 \n", hundred_notes);
    int fifties = 50;
    int fifty_notes = amount / fifties;
    amount = amount - (fifties * fifty_notes);
    printf("%d Note(s) of 50.00 \n", fifty_notes);
    int twenties = 20;
    int twenty_notes = amount / twenties;
    amount = amount - (twenties * twenty_notes);
    printf("%d Note(s) of 20.00 \n", twenty_notes);
    int tens = 10;
    int ten_notes = amount / tens;
    amount = amount - (tens * ten_notes);
    printf("%d Note(s) of 10.00 \n", ten_notes);
    int fives = 5;
    int five_notes = amount / fives;
    amount = amount - (fives * five_notes);
    printf("%d Note(s) of 5.00 \n", five_notes);
    int twos = 2;
    int two_notes = amount / twos;
    amount = amount - (twos * two_notes);
    printf("%d Note(s) of 2.00 \n", two_notes);
    int ones = 1;
    int one_notes = amount / ones;
    amount = amount - (ones * one_notes);
    printf("%d Note(s) of 1.00 \n", one_notes);
}