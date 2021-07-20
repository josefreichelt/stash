// Variable sizes
#include <climits>
#include <iostream>

using namespace std;

int main() {
    cout << "Size of char is: " << sizeof(char) << " bytes" << endl;
    cout << "Size of short is: " << sizeof(short) << " bytes" << endl;
    cout << "Size of int is: " << sizeof(int) << " bytes" << endl;
    cout << "Size of unsigned int is: " << sizeof(unsigned int) << " bytes" << endl;
    cout << "Size of long is: " << sizeof(long) << " bytes" << endl;
    cout << "Size of long long is: " << sizeof(long long) << " bytes" << endl;

    cout << "________________________________________" << endl;

    cout << "Size of float is: " << sizeof(float) << " bytes" << endl;
    cout << "Size of double is: " << sizeof(double) << " bytes" << endl;
    cout << "Size of long double is: " << sizeof(long double) << " bytes" << endl;

    cout << "________________________________________" << endl;
    cout << "Minimum values:" << endl;
    cout << CHAR_MIN << endl;
    cout << INT_MIN << endl;
    cout << SHRT_MIN << endl;
    cout << LONG_MIN << endl;
    cout << LLONG_MIN << endl;

    cout << "________________________________________" << endl;
    cout << "Maximum values:" << endl;

    cout << CHAR_MAX << endl;
    cout << INT_MAX << endl;
    cout << SHRT_MAX << endl;
    cout << LONG_MAX << endl;
    cout << LLONG_MAX << endl;

    return 0;
}