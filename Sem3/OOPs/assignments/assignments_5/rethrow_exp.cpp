#include <iostream>
#include <stdexcept>

using namespace std;

int main()
{
  // try
  // {
    try
    {
      throw "Inner exception occurred!";
    }
    catch (char *e)
    {
      cout << e << endl;
      throw; // Rethrowing the same exception
    }
  // }
  // catch (char *e)
  // {
  //   cout << e << endl; // This will print "Inner exception occurred!"
  // }

  return 0;
}


