// Write a C++ Program to add, subtract, multiply and divide two numbers using class
// template
#include <iostream>

using namespace std;

template <typename T>

class Calculator
{
public:
    T a;
    T b;
    
    Calculator(T a, T b)
    {
        this->a = a;
        this->b = b;
    }
    T sumTwoNumber()
    {
        return a + b;
    }

    T subTwoNumber()
    {
        return a - b;
    }

    T multiTwoNumber()
    {
        return a * b;
    }

    T divTwoNumber()
    {
        return a / b;
    }
};

int main()
{
    Calculator<int> obj(48, 12);
    cout << "addition is  : " << obj.sumTwoNumber() << endl;
    cout << "subtraction is  : " << obj.subTwoNumber() << endl;
    cout << "multiply is  : " << obj.multiTwoNumber() << endl;
    cout << "division is  : " << obj.divTwoNumber() << endl;
    return 0;
}