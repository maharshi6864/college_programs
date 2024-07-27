// Write a C++ program to swap numbers using friend function.

#include <iostream>

using namespace std;

class Person
{

public:
  int a = 10, b = 20;
  friend void swappNumber(Person &pesonObj);
};

void swappNumber(Person &personObj)
{
  int temp = personObj.a;
  personObj.a = personObj.b;
  personObj.b = temp;
}

int main()
{
  Person obj;
  cout << "Value of a before swapping : " << obj.a << endl;
  cout << "Value of b before swapping : " << obj.b << endl;
  swappNumber(obj);

  cout << "Value of a after swapping : " << obj.a << endl;
  cout << "Value of b after swapping : " << obj.b << endl;
}
