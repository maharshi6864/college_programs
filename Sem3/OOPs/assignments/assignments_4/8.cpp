// Write a program to show values of different data types using templates and constructor.

#include <iostream>
#include <string>
#include <type_traits>

using namespace std;

template <typename T>
class MyClass {
private:
    T a;
    T b;

public:
    MyClass(T a, T b) {
        this->a = a;
        this->b = b;
        cout << "Type of a: " << getTypeName() << " (value: " << a << ") type info !!" << endl;
    }

    string getTypeName() {
        if (is_same<T, int>::value) {
            return "integer";
        } else if (is_same<T, double>::value) {
            return "double";
        } else if (is_same<T, string>::value) {
            return "string";
        } else if (is_same<T, char>::value) {
            return "char";
        } else {
            return "unknown type";
        }
    }
};

int main() {
    MyClass<int> a(12, 24);
    MyClass<char> b('a', 'b');
    MyClass<double> c(12.23, 12.12);
    return 0;
}
