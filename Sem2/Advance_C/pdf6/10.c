// WAP to create a structure titled Vehicle with Vehicleid, vehicle_brandname,vehicle_price.Enter
//  10 records for this structure.Pass this structure to a function and display the vehicles having price
//  greater than 25000 .
#include <stdio.h>

struct Vehicle
{
  int vehicle_id;
  char vehicle_brandname[20];
  float vehicle_price;
};

void displayCarGreaterThan(struct Vehicle vehicle, int price_filter)
{
  if (vehicle.vehicle_price > price_filter)
  {
    printf("\n\nVehicle id: %d", vehicle.vehicle_id);
    printf("\nVehicle Brand Name: %s", vehicle.vehicle_brandname);
    printf("Vehicle Price: %.2f", vehicle.vehicle_price);
  }
}

int main()
{
  int number_of_vehicles = 0;

  printf("Enter number of vehicles: ");
  scanf("%d", &number_of_vehicles);

  struct Vehicle vehicle[number_of_vehicles];

  for (int i = 0; i < sizeof(vehicle) / sizeof(vehicle[0]); i++)
  {
    printf("\n\nEnter vechile %d details", i + 1);
    printf("\nEnter vehicle id: ");
    scanf("%d", &vehicle[i].vehicle_id);
    getchar();
    printf("Enter vehicle brandname: ");
    fgets(vehicle[i].vehicle_brandname, sizeof(vehicle[i].vehicle_brandname), stdin);
    printf("Enter vehicle price: ");
    scanf("%f", &vehicle[i].vehicle_price);
  }

  int price_filter;
  printf("\nEnter price filter: ");
  scanf("%d", &price_filter);

  printf("\n\nVehiles having price lower than %d", price_filter);
  for (int i = 0; i < number_of_vehicles; i++)
  {
    displayCarGreaterThan(vehicle[i], price_filter);
  }

  return 0;
}