#include <iostream>

int main()
{

    // // Brace initialization
    // int elephant_count; // Gets a random garbage value; WARNING

    // int lion_count{}; // Initializes to zero

    // int dog_count{10}; // Initializes to 10

    // int cat_count{15}; // Initializes to 15

    // // Expression as initializer
    // int domesticated_animals{dog_count + cat_count};

    // // int narrowing_conversion{2.9}; converts to 2

    // std::cout << "Elephant count: " << elephant_count << std::endl;
    // std::cout << "Lion count: " << lion_count << std::endl;
    // std::cout << "Dog count: " << dog_count << std::endl;
    // std::cout << "Cat count: " << cat_count << std::endl;
    // std::cout << "Domesticated animal count: " << domesticated_animals << std::endl;
    // std::cout << "Narrowing conversion: " << narrowing_conversion << std::endl;

    // Functional initialization

    // int apple_count(5); // Initializes to 5
    // int orange_count(10); // Initializes to 10
    // // Expression as initializer
    // int fruit_count(apple_count + orange_count);

    // int narrowing_conversion(2.9); // converts to 2

    // std::cout << "Apple count: " << apple_count << std::endl;
    // std::cout << "Orange count: " << orange_count << std::endl;
    // std::cout << "Domesticated animal count: " << fruit_count << std::endl;
    // std::cout << "Narrowing conversion: " << narrowing_conversion << std::endl;

    // Assignment initialization
    int bike_count = 2;  // Initializes to 5
    int truck_count = 7; // Initializes to 10
    // Expression as initializer
    int vehicle_count = bike_count + truck_count;

    int narrowing_conversion = 2.9; // converts to 2

    std::cout << "Bike count: " << bike_count << std::endl;
    std::cout << "Truck count: " << truck_count << std::endl;
    std::cout << "Vehicle count: " << vehicle_count << std::endl;
    std::cout << "Narrowing conversion: " << narrowing_conversion << std::endl;

    // Check the size with sizeof
    std::cout << "sizeof int: " << sizeof(int) << std::endl;
    std::cout << "sizeof truck_count: " << sizeof(truck_count) << std::endl;
    return 0;
}
