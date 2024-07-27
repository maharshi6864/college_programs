#include <iostream>

using namespace std;

class TernaryOperator
{
public:
    void ternaryOperator(int a, int b)

    {
        (a > b) ? cout << "value of a is greater than b \n" : cout << "value of b is greater than a \n";
    }
};

int main()
{
    TernaryOperator ter;
    int a, b;
    cout << "enter value of a : ";
    cin >> a;

    cout << "enter value of b : ";
    cin >> b;

    ter.ternaryOperator(a, b);
}
