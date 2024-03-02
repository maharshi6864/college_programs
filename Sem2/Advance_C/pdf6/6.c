// Design a structure named "Car" to store details like car ID, model, and rental rate per day. Write
//  a C program to input data for three cars, calculate the total rental cost for a specified number of
//  days, and display the results.

#include <stdio.h>

struct Car
{
  int car_id;
  char car_model[30];
  float rental_rate;
};

int main()
{
  int number_of_cars = 0;
  printf("Enter number of cars : ");
  scanf("%d", &number_of_cars);

  struct Car cars[number_of_cars];

  for (int i = 0; i < number_of_cars; i++)
  {
    printf("Enter car details for car  %d\n", i + 1);
    printf("Enter car Id : ");
    scanf("%d", &cars[i].car_id);
    getchar();
    printf("Enter car model : ");
    fgets(cars[i].car_model, 30, stdin);
    printf("Enter rental rate : ");
    scanf("%f", &cars[i].rental_rate);
    printf("\n");
  }

  float number_of_days = 0;
  for (int i = 0; i < number_of_cars; i++)
  {
    printf("Car details for car  %d\n", i + 1);
    printf("Car Id : %d\n", cars[i].car_id);
    printf("Car Model : %s", cars[i].car_model);
    printf("Car Rental rate : %.2f\n", cars[i].rental_rate);
    printf("Enter number of days : ");
    scanf("%f", &number_of_days);
    printf("Car Rent for number of day %d is %.2f\n", (int)number_of_days, cars[i].rental_rate * number_of_days);
    printf("\n");
  }

  return 0;
}