#include <iostream>

int main()
{
    int elephant_count; // Gets a random garbage value; WARNING

    int lion_count{}; // Initializes to zero

    int dog_count{10}; // Initializes to 10

    int cat_count{15}; // Initializes to 15

    // Expression as initializer

    int domesticated_animals{ dog_count + cat_count };

    return 0;
}
