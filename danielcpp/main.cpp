#include <iostream>

int main()
{
    // THIS IS A COMMENT, WOOOOOO

    /*
        THIS
        IS
        A
        MULTI
        LINE
        COMMENT
        WOOOOOO
    */
    std::cout << "Number 1" << std::endl;
    std::cout << "Number 2" << std::endl;
    std::cout << "Number 3" << std::endl;

    // Run time error
    int value = 7 / 0;
    std::cout << value << std::endl;
    return 0;
}