#include <iostream>
using namespace std;

template <class t>
void area(t side)
{
  cout << "Area of Square : " << side * side;
}

template <class t>
void area(t l, t b)
{
  cout << "Area of Rectangle : " << l * b;
}
int main()
{
  area(2);

  area(9, 8);
}