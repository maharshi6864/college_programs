#include <stdio.h>

int main()
{
    int numbers_seconds;
    printf("Enter number of seconds :");
    scanf("%d", &numbers_seconds);
    int secs_in_hrs = 3600;
    int hrs = numbers_seconds / secs_in_hrs;
    numbers_seconds = numbers_seconds - (secs_in_hrs * hrs);

    int secs_in_min = 60;
    int mins = numbers_seconds / secs_in_min;
    numbers_seconds = numbers_seconds - (secs_in_min * mins);
    printf("H:M:S - %d:%d:%d", hrs, mins, numbers_seconds);
}