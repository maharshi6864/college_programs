#include <iostream>

using namespace std;

int main()
{
  int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  int sizeOfArr = sizeof(arr) / sizeof(arr[1]);
  for (int i = 0; i < sizeOfArr; i++)
  {
    cout << "value at index " << i << " : " << arr[i] << endl;
  }
}