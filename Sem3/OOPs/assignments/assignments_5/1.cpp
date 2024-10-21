#include <iostream>

using namespace std;

int main()
{
  int n;
  cout << "enter number of inputs : ";
  cin >> n;

  try
  {
    if (n <= 1)
    {
      throw runtime_error("Invlaid Input");
    }
    int arr[n];
    for (int i = 0; i < n; i++)
    {
      cout << "enter number at index" << i << "  : ";
      cin >> arr[i];
    }

    for (int i = 0; i < n; i++)
    {
      for (int j = i; j < n; j++)
      {
        if (arr[i] > arr[j])
        {
          int temp = arr[i];
          arr[i] = arr[j];
          arr[j] = temp;
        }
      }
    }

    cout << "Highest Number is : " << arr[n - 1] << endl;
    cout << "Second Highest Number is : " << arr[n - 2] << endl;
  }
  catch (const runtime_error &e)
  {
    cout << e.what();
  }

  return 0;
}