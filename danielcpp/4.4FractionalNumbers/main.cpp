#include <iostream>

int main()
{
    float number1{1.234523452323452345f};
    double number2{1.234523452323452345f};
    long double number3{1.234523452323452345L};

    std::cout << "sizeof float: " << sizeof(number1) << std::endl;
    std::cout << "sizeof double: " << sizeof(number2) << std::endl;
    std::cout << "sizeof long double: " << sizeof(number3) << std::endl;

    return 0;
}
