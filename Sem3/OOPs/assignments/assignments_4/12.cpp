#include <iostream>
using namespace std;

template <class t>
class displayValue
{
public:
  t show(t p, t r, t n)
  {
    t simpleInt = (p * r * n) / 100;
    return simpleInt;
  }
};
int main()
{
  int p, r, n;
  cout << "Enter Principle Amt";
  cin >> p;
  cout << "Enter rate of int";
  cin >> r;
  cout << "Enter no of times Amt";
  cin >> n;
  displayValue<int> obj;
  int result = obj.show(p, r, n);
  cout << result;
}