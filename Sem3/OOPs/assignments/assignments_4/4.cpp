// Write program for swapping two values of different data type with use of function template.

#include <iostream>

using namespace std;

template <typename T>

void swapValues(T &a,T &b)
{
    T temp=a;
    a=b;
    b=temp;
}

int main()
{
    int a=10,b=20;
    cout<<"values before swapping : a = "<<a<<" b = "<<b<<endl<<endl;
    swapValues(a,b);
    cout<<"values after swapping : a = "<<a<<" b = "<<b;
    return 0;
}