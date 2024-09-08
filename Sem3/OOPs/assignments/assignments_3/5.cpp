#include <iostream>

using namespace std;

int main()
{
  cout << "Enter Size of an array  : ";
  int len = 0;
  cin >> len;
  int arr[len];
  for (int i = 0; i < len; i++)
  {
    cout << "Enter element at index " << i << " : ";
    cin >> arr[i];
  }

  for (int i = 0; i < len; i++)
  {
    cout << "Element at index " << i << " is : " << arr[i] << endl;
  }
}