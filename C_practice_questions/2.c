#include <stdio.h>

int main()
{
    int days = 1329;
    int year_days = 365;
    int years = days / year_days;
    days = days - (years * year_days);
    printf(" years :%d \n", years);
    int week_days = 7;
    int weeks = days / week_days;
    days = days - (weeks * week_days);
    printf("weeks :%d \n", weeks);
    printf(" days :%d", days);
}