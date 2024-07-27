// 2. Armstrong or Not
#include <iostream>

using namespace std;

int main()
{
  int total = 0, number;
  cout << "enter number to find either it is an armstrong number : ";
  cin >> number;
  int temp = number;
  while (number > 0)
  {
    int num = number % 10;
    total += (num * num * num);
    number /= 10;
  }
  if (temp == total)
  {
    cout << "entered number is an armstrong number.";
  }
  else
  {
    cout << "entered number is not an armstrong number.";
  }
}