
#include <iostream>

int main()
{
    using namespace std;
    cout << "hello arithmetic operators" << endl;
    int num1{200};
    int num2{100};

    cout << num1 << " + " << num2 << " = " << num1 + num2 << endl;

    int result{0};

    result = num1 - num2;
    cout << "result is " << result << endl;

    cout << endl;
}