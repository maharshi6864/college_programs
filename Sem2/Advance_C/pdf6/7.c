#include <stdio.h>

struct Date
{
  int date;
  int month;
  int year;
};

char *checkWhichMonth(int month)
{
  switch (month)
  {
  case 1:
    return "January";
    break;
  case 2:
    return "Feb";
    break;
  case 3:
    return "March";
    break;
  case 4:
    return "April";
    break;
  case 5:
    return "May";
    break;
  case 6:
    return "June";
    break;
  case 7:
    return "July";
    break;
  case 8:
    return "August";
    break;

  default:
    return "Month No available";
    break;
  }
}

int main()
{
  struct Date day1;
  struct Date day2;

  printf("Enter Date for day one : ");
  scanf("%d", &day1.date);
  printf("Enter Month for day one : ");
  scanf("%d", &day1.month);
  printf("Enter Year for day one : ");
  scanf("%d", &day1.year);

  printf("Enter Date for day two : ");
  scanf("%d", &day2.date);
  printf("Enter Month for day two : ");
  scanf("%d", &day2.month);
  printf("Enter year for day two : ");
  scanf("%d", &day2.year);

  printf("Month for day1 %d/%d/%d is %s.\n", day1.date, day1.month, day1.year, checkWhichMonth(day1.month));
  printf("Month for day2 %d/%d/%d is %s.\n", day2.date, day2.month, day2.year, checkWhichMonth(day2.month));
}