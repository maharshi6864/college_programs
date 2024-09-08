#include <iostream>

using namespace std;

int main()
{
  int arr[10] = {1,
                 2,
                 3,
                 43,
                 4,
                 54,
                 34,
                 56,
                 78,
                 32};
  int max = arr[0];
  int len = sizeof(arr) / sizeof(arr[1]);
  for (int i = 0; i < len; i++)
  {
    if (max < arr[i])
    {
      max = arr[i];
    }
  }

  cout << "Greatest number in th array is : " << max;
}