#include <iostream>

using namespace std;

template <typename T1, typename T2>
void mySwap(T1 &a, T2 &b) // Pass by reference; to change value inside function
{
    T1 temp;
    temp = a;
    a = b;
    b = temp;
}
int main()
{
    int a = 69;   // E
    char b = 'R'; // C
    cout << "Before Swap a: " << a << ",b:" << b << endl;
    mySwap(a, b);
    cout << "After Swap a: " << a << ",b:" << b;
}