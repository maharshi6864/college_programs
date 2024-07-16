#include <iostream>

using namespace std;

class FuctionOverloadingExample
{
public:
  void addition(int num1, int num2)
  {
    cout << "Addition of two interger value is : " << num1 + num2 << endl;
  }

public:
  void addition(float num1, float num2)
  {
    cout << "Addition of two float value is : " << num1 + num2 << endl;
  }

public:
  void addition(double num1, double num2)
  {
    cout << "Addition of two double value is : " << num1 + num2 << endl;
  }
};

int main()
{
  FuctionOverloadingExample obj1;

  obj1.addition(12, 334);
  obj1.addition(177.21f, 33.89f);
  obj1.addition(12.21, 33.22);
}