// Write a C++ Program to to add two numbers with use of template function.
#include  <iostream>

using namespace std;

template <typename T>

T sumOfTwoNumber(T a,T b)
{
    return a+b;
}

int main()
{
    cout<<"Sum of integer : "<<sumOfTwoNumber<int>(122,12)<<endl;
    cout<<"Sum of double : "<<sumOfTwoNumber<double>(56.45,783.45);
    return 0;
}