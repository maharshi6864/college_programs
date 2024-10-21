#include <iostream>

using namespace std;

int main()
{
  int size;

  cout << "enter size of the array : ";
  cin >> size;
  int arr[size];
  for (int i = 0; i < size; i++)
  {
    cout << "enter number at index" << i << "  : ";
    cin >> arr[i];
  }

  int index;
  cout << "Enter an index to access: ";
  cin >> index;

  try
  {
    if (index >= size || index < 0)
    {
      throw runtime_error("Invalid index");
    }

    cout << "Value at index " << index << " is " << arr[index];
  }
  catch (const runtime_error &e)
  {
    cout << e.what();
  }

  return 0;
}