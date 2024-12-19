#include <iostream>

using namespace std;

int main()
{
  int arr[10] = {243, 56, 78, 4, 67, 34, 5, 45, 23, 89};
  for (int i = 0; i < 10; i++)
  {
    for (int j = i; j < 10; j++)
    {
      if (arr[i] < arr[j])
      {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
      }
    }
  }

  for (int i = 0; i < 10; i++)
  {
    cout << arr[i] << " ";
  }
}