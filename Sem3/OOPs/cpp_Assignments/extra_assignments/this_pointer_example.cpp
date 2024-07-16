#include <iostream>

using namespace std;

class ThisPointerExample
{
public:
  int number;

public:
  void addition(int number)
  {
    cout << "Addition of two interger value is : " << this->number + number << endl;
  }
};

int main()
{
  ThisPointerExample obj1;
  int number;
  cout << "enter value of number in class : ";
  cin >> obj1.number;

  cout << "enter value of number as a variable in int main method : ";
  cin >> number;

  obj1.addition(number);
}