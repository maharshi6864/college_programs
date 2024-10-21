// create template class to find binary value of a number given by user
#include <iostream>
using namespace std;

template <class t>
class displayValue
{
public:
    void show(t value)
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
                binary = (value % 2 == 0 ? "0" : "1") + binary;
                value = value / 2;
            }
        }
        cout << "binary number is:" << binary;
    }
};
int main()
{
    displayValue<int> obj;
    obj.show(3);
}