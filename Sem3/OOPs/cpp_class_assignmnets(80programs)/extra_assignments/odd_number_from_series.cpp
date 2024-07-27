#include <iostream>

using namespace std;

class OddFromSeries
{
public:
  OddFromSeries(int start, int end)
  {
    for (int i = start; i <= end; i++)
    {
      if (i % 2 != 0)
      {
        cout << "number " << i << " is an odd number." << endl;
      }
    }
  }
};

int main()
{
  int start, end;
  cout << "enter starting number : ";
  cin >> start;

  cout << "enter ending number : ";
  cin >> end;

  OddFromSeries oddNumbers(start, end);
}