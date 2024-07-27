// Write a C++ program to find the area of a circle.
#include <iostream>

using namespace std;

int main()
{
  double radius;
  cout << "enter radius of the circle : ";
  cin >> radius;
  const double PIE = 3.14159265359;
  float area = PIE * radius * radius;
  cout << "Area of circle of radius : " << area;
}