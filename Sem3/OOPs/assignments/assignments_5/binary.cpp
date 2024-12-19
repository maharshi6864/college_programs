#include <iostream>

using namespace std;

template <class T>
class displayValue
{
public:
  void show(T value)
  {
    string binary = "";
    if (value == 0)
    {
      binary = binary + "0";
    }
    else
    {
      while (value > 0)
      {
        // Instead of ternary operator, we use if-else
        if (value % 2 == 0)
        {
          binary = "0" + binary; // Add '0' for even
        }
        else
        {
          binary = "1" + binary; // Add '1' for odd
        }
        value = value / 2; // Move to the next bit
      }
    }
    cout << "binary number is : " << binary;
  };
};

int main()
{
  displayValue<int> obj;
  obj.show(2);
}