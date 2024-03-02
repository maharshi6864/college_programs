// Define a structure that can describe a Hotel. It should have members that include name, address,
//  grade, room charges, grade and no of rooms.
//  Write a function to print out all hotel details with room charges less than a given value.

#include <stdio.h>
#include <stdbool.h>

struct Hotel
{
  char hotel_name[20];
  char hotel_address[50];
  char hotel_grade[2];
  float room_charges;
  int no_of_rooms;
};

int main()
{

  int number_of_hotels;

  printf("Enter the number of hotels: ");
  scanf("%d", &number_of_hotels);
  getchar();

  struct Hotel hotels[number_of_hotels];
  for (int i = 0; i < sizeof(hotels) / sizeof(hotels[0]); i++)
  {
    printf("\n\nEnter the details of hotel %d. \n", i + 1);
    printf("Enter the name of the hotel: ");
    fgets(hotels[i].hotel_name, sizeof(hotels[i].hotel_name), stdin);
    printf("Enter the address of the hotel: ");
    fgets(hotels[i].hotel_address, sizeof(hotels[i].hotel_address), stdin);
    printf("Enter the grade of the hotel: ");
    scanf("%s", hotels[i].hotel_grade);
    printf("Enter the room charges of the hotel: ");
    scanf("%f", &hotels[i].room_charges);
    printf("Enter the number of rooms of the hotel: ");
    scanf("%d", &hotels[i].no_of_rooms);
    getchar();
  }

  float price_filter = 0.0;
  int flag = 0;

  printf("\n\n\nEnter the price under you want the hotel rooms : ");
  scanf("%f", &price_filter);

  for (int i = 0; i < sizeof(hotels) / sizeof(hotels[0]); i++)
  {
    if (hotels[i].room_charges < price_filter)
    {
      printf("\n\nHotel %d", flag + 1);
      printf("\nName: %s", hotels[i].hotel_name);
      printf("Address: %s", hotels[i].hotel_address);
      printf("Grade: %c", hotels[i].hotel_grade);
      printf("\nCharges of a Room: %.2f", hotels[i].room_charges);
      printf("\nNumber of Rooms: %d", hotels[i].no_of_rooms);
      flag++;
    }
  }

  if (flag == 0)
  {
    printf("No rooms available for the price filter you want to filter!");
  }

  return 0;
}