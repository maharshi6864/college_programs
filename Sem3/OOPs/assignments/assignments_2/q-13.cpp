// Write a c++ Program to demonstrate the use of Friend class to access the member of one
// class

#include <iostream>

using namespace std;

class Person
{

public:
  int a = 10, b = 20;
  friend class Fri;
};

class Fri
{
public:
  void swappNumber(Person &personObj)
  {
    int temp = personObj.a;
    personObj.a = personObj.b;
    personObj.b = temp;
  }
};

int main()
{
  Person obj;
  Fri frinedObj;
  cout << "Value of a before swapping : " << obj.a << endl;
  cout << "Value of b before swapping : " << obj.b << endl;
  frinedObj.swappNumber(obj);

  cout << "Value of a after swapping : " << obj.a << endl;
  cout << "Value of b after swapping : " << obj.b << endl;
}
