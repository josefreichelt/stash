#include <iostream>
#include <string>

int main()
{

    /* Different output methods
    int age{21};
    std::cout << "Age: " << age << std::endl;
    std::cerr << "Something is wrong" << std::endl;
    std::clog << "Something happened, logging" << std::endl;
    */

    /* Data with input
        int age1;
        std::string name;
        std::cout << "Please type your name and age: " << std::endl;

        std::cin >> name;
        std::cin >> age1;

        std::cout << "Hello " << name << " you are " << age1 << " years old!" << std::endl;
    */
    // Data with input and spaces
    int age1;
    std::string full_name;
    std::cout << "Please type your name and age: " << std::endl;
    std::getline(std::cin, full_name);
    std::cin >> age1;

    std::cout << "Hello " << full_name << " you are " << age1 << " years old!" << std::endl;

    return 0;
}
