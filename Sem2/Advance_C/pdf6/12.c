// WAP to store following details using structure. Name,DOB,Addresse,Contact no for customer.
//  For address and DOB create another sturucture and use that structure into customer stucture.

#include <stdio.h>

struct PersonalDetails
{
  char address[50];
  char date[15];
};

struct CustomerDetails
{
  char cust_name[30];
  long cust_phone;
  struct PersonalDetails personal_details;
};

int main()
{
  int number_of_customer;
  printf("Enter number of customers: ");
  scanf("%d", &number_of_customer);
  getchar();
  struct CustomerDetails customer[number_of_customer];

  for (int i = 0; i < sizeof(customer) / sizeof(customer[0]); i++)
  {
    printf("\n\nCustomer %d Details", i + 1);
    printf("\nEnter customer name: ");
    fgets(customer[i].cust_name, sizeof(customer[i].cust_name), stdin);
    printf("Enter customer phone: ");
    scanf("%ld", &customer[i].cust_phone);
    getchar();
    printf("Enter customer address: ");
    fgets(customer[i].personal_details.address, sizeof(customer[i].personal_details.address), stdin);
    printf("Enter customer date of birth: ");
    fgets(customer[i].personal_details.date, sizeof(customer[i].personal_details.date), stdin);
  }

  printf("\n\nCustomer Details :::::::::::::::::::::::::::::::::");
  for (int i = 0; i < sizeof(customer) / sizeof(customer[0]); i++)
  {
    printf("\n\nCustomer %d Details", i + 1);
    printf("\nCustomer name : %s", customer[i].cust_name);
    printf("Customer Phone Number : %d", customer[i].cust_phone);
    printf("\nCustomer Address : %s", customer[i].personal_details.address);
    printf("Customer Date of Birth : %s", customer[i].personal_details.date);
  }

  return 0;
}