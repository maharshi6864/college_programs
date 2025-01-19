#include <iostream>

using namespace std;

int main()
{
  int numberOfElements;
  cout << "Enter number of elements : ";
  cin >> numberOfElements;
  int arr[numberOfElements];

  for (int i = 0; i < numberOfElements; i++)
  {
    cout << "Enter element for index " << i << " : ";
    cin >> arr[i];
  }

  cout << "Displaying array in reverse !!" << endl;

  for (int i = numberOfElements - 1; i >= 0; i--)
  {
    cout << arr[i] << endl;
  }

  return 0;
}