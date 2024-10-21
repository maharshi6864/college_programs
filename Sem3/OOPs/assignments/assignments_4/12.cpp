#include <iostream>
#include <bitset>
using namespace std;

// Template class to find the binary representation of a number
template <typename T>
class BinaryConverter {
private:
    T number;
public:
    // Constructor to initialize the number
    BinaryConverter(T num) : number(num) {}

    // Method to convert number to binary
    void displayBinary() {
        // Determine the number of bits based on the type of number (T)
        int numBits = sizeof(T) * 8;
        //             32 =4*8
        bitset<sizeof(T) * 8> binary(number);
        cout << "Binary representation of " << number << " is: " << binary << endl;
    }
};

int main() {
    int num;

    // Input from user
    cout << "Enter an integer: ";
    cin >> num;

    // Create an object of BinaryConverter with int type
    BinaryConverter<int> binaryConverter(num);

    // Display the binary value
    binaryConverter.displayBinary();

    return 0;
}
