#include <iostream>

using namespace std;

int main()
{
  string email;

  cout << "enter email address : ";
  cin >> email;

  try
  {
    int inde = email.find('@');
    if (inde > email.length() || inde < 0)
    {
      throw runtime_error("@ not found in address");
    }
  }
  catch (const runtime_error &e)
  {
    cout << e.what();
  }
}