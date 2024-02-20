// Write a menu driven program for Pointers using switch case to perform following
// operation
//     • Area of circle using pointer.
//     • Print the address of radius.
//     • Print the circumference of circle

#include <stdio.h>
#define PI 3.14159265

int main()
{
  float radius = 0.0;
  int choice = 0;
  printf("Enter Your Choice for Following Options V\n");
  printf("  1.Area of circle using pointer. \n  2. Print the address of radius.\n  3. Print the circumference of circle\n");
  printf("\nYour Choice: ");
  scanf("%d", &choice);
  printf("Enter Radius of the Circle : ");
  scanf("%f", &radius);
  float *radius_ptr = &radius;
  int *choice_ptr = &choice;
  switch (*choice_ptr)
  {
  case 1:
    printf("Area of the circle of : %f", *radius_ptr * *radius_ptr * PI);
    break;

  case 2:
    printf("Address of the radius id : %p ", radius_ptr);
    break;

  case 3:
    printf("Circumference of the circle is : %f", 2 * PI * *radius_ptr);
    break;

  default:
    printf("Invalid Choice Entered");
    break;
  }
}