#include <iostream>
#include <stdexcept>

using namespace std;

int main()
{
  try
  {
    try
    {
      throw "Inner exception occurred!";
    }
    catch (const char *e)
    {
      cout << e << endl;
      throw;
    }
  }
  catch (const char *e)
  {
    cout << e << endl;
  }

  return 0;
}
