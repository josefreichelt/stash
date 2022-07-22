
#include <iostream>

int main()
{
    using namespace std;
    bool equal_result{false};
    bool not_equal_result{false};

    int num1{}, num2{};
    cout << boolalpha; // shows true, false
    cout << "Enter 2 integers separated by space: ";
    cin >> num1 >> num2;

    cout << endl;
    equal_result = num1 == num2;
    not_equal_result = num1 != num2;
    cout << "Numbers are equal: " << equal_result << endl;
    cout << "Numbers are not equal: " << not_equal_result << endl;

    cout << endl;
}