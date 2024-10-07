// Write a program to display the reverse of a given number using template based function.

#include <iostream>

using namespace std;

template <typename T>

T reverseNumber(T number)
{
    T ans=0;
    T temp=number;

    while(temp>0)
    {
        T r= temp%10;
        ans +=r;
        ans*=10; 
        temp/=10;
    }
    return ans/10;
}

int main()
{
    cout<<reverseNumber(121111);
    return 0;
}