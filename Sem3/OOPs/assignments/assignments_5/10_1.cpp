#include <iostream>

using namespace std;

int main()
{
  int number;

  cout << "enter number : ";
  cin >> number;

  try
  {
    if (number % 2 != 0)
    {
      throw runtime_error("Entered number is odd !");
    }

    cout << "Entered number is even .";
  }
  catch (const runtime_error &e)
  {
    cout << e.what();
  }

  return 0;
}