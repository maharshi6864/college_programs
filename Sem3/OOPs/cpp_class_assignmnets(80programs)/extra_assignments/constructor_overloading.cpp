#include <iostream>

using namespace std;

class ConstructorOverloadingExample
{
public:
  ConstructorOverloadingExample()
  {
    cout << "Overloaded Constructor 1!" << endl;
  }

public:
  ConstructorOverloadingExample(int number)
  {
    cout << "Overloaded Constructor 2!" << endl;
    cout << "number entered is " << number << endl;
  }

public:
  ConstructorOverloadingExample(float number)
  {
    cout << "Overloaded Constructor 2!" << endl;
    cout << "number entered is " << number << endl;
  }
};

int main()
{
  ConstructorOverloadingExample const1;
  ConstructorOverloadingExample const2(34);
  ConstructorOverloadingExample const3(72.1f);
}