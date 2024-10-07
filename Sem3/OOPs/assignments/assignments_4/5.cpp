// Write a program to pass an object to template function and display its members.
#include <iostream>

using namespace std;

class MyClass{
    public:
        int a;
        int b;
};

template <class T>

void showMember(T obj)
{
    cout<<"a : "<<obj.a<<endl<<"b : "<<obj.b;
}

int main()
{
    MyClass obj;
    obj.a=10;
    obj.b=20;
    showMember(obj);
    return 0;
}