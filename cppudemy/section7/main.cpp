#include <iostream>
// Arrays are fixed, same type, stored contiguously in memory

int main()
{
    // Declaring an aray
    int high_score_per_level [10] {0}; // 10 integers initialized to 0

    high_score_per_level[1] = 20;

    std::cout << "Second element " << high_score_per_level[1] << std::endl;
}