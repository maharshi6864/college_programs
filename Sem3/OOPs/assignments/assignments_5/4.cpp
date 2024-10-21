#include <iostream>

using namespace std;

int main()
{
  int number;

  cout << "enter number : ";
  cin >> number;

  try
  {
    if (number < 0 || number > 100)
    {
      throw runtime_error("invalid input");
    }
  }
  catch (const runtime_error &e)
  {
    cout << e.what();
  }

  return 0;
}