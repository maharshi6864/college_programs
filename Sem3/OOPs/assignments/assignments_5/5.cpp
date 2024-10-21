#include <iostream>

using namespace std;

int performArithmaticOperation(int num1, int num2, char op)
{
  int ans;

  switch (op)
  {
  case '+':
    ans = num1 + num2;
    break;
  case '-':
    ans = num1 - num2;
    break;
  case '*':
    ans = num1 * num2;
    break;
  case '/':
    if (num2 == 0)
    {
      throw runtime_error("Divisor is zero");
    }
    ans = num1 / num2;
    break;

  default:
    throw runtime_error("Invalid Input");
    break;
  }

  return ans;
}

int main()
{
  try
  {
    int num1, num2;
    char op;
    cout << "enter number 1 :";
    cin >> num1;

    cout << "enter + for additionl, - for subractio, * for multiplication and / for division :";
    cin >> op;

    cout << "enter number 2 :";
    cin >> num2;

    int ans = performArithmaticOperation(num1, num2, op);
    cout << "Result is : " << ans << endl;
  }
  catch (const runtime_error &e)
  {
    cout << e.what();
  }
  return 0;
}