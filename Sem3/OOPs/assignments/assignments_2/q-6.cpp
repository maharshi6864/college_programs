// Write a C++ program to calculate the area of circle, rectangle and square using function
// overloading

#include <iostream>

using namespace std;

class AreaCalculator
{

public:
  float area(float radius)
  {
    return 3.14 * radius * radius;
  }

  int area(int side)
  {
    return side * side;
  }

  int area(int side1, int side2)
  {
    return side1 * side2;
  }
};

int main()
{
  AreaCalculator a;
  float radius;
  int side1, side2;

  cout << "enter radius of the circle : ";
  cin >> radius;

  cout << "Area of circle is : " << a.area(radius);

  cout << "enter side of the squarer : ";
  cin >> side1;

  cout << "Area of square is : " << a.area(side1);

  cout << "enter side 1 of the rectangle : ";
  cin >> side1;

  cout << "enter side 2 of the rectangle : ";
  cin >> side2;

  cout << "Area of rectangle is : " << a.area(side1, side2);
}