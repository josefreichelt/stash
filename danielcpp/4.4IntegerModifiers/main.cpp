#include <iostream>

int main()
{
    int value1{10};
    int value2{-300};
    std::cout << "value1: " << value1 << std::endl;
    std::cout << "value2: " << value2 << std::endl;
    std::cout << "size of value1: " << sizeof(value1) << std::endl;
    std::cout << "size of value2: " << sizeof(value2) << std::endl;

    unsigned int value3{4};
    // unsigned int value4{-5}; // Compiler error
    std::cout << "value3: " << value3 << std::endl;
    std::cout << "size of value3: " << sizeof(value3) << std::endl;

    unsigned long value4{4323};
    std::cout << "value4: " << value4 << std::endl;
    std::cout << "size of value4: " << sizeof(value4) << std::endl;

    return 0;
}
