// Write a C++ Program to display largest among two numbers using function templates. Pass
// Integer, Float and Character as parameter to the template.

#include <iostream>

using namespace std;

template <typename T>

T findTheLargest(T a, T b)
{
    if (a > b)
    {
        return a;
    }
    else if (b > a)
    {
        return b;
    }
    else if (a == b)
    {
        return 0;
    }
}

int main()
{
    cout<<"Integer Example  : "<<findTheLargest<int>(10,1)<<endl;
    cout<<"Double Example  : "<<findTheLargest<double>(10.23,12.21)<<endl;
    cout<<"Character Example  : "<<findTheLargest<char>('a','A')<<endl;
    return 0;
}
