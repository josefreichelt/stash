#include <iostream>
// Arrays are fixed, same type, stored contiguously in memory
using namespace std;

int main()
{
    // Declaring an aray
    int high_score_per_level[10]{0}; // 10 integers initialized to 0

    high_score_per_level[1] = 20;

    cout << "Second element " << high_score_per_level[1] << endl;

    char vowels[]{'a', 'e', 'i', 'o', 'u'};
    cout << "\nThe first vowel is: " << vowels[0] << endl;
    cout << "The last vowel is: " << vowels[4] << endl;

    // std::cin >> vowels[5]; out of bounds

    double hi_temps[]{90.1, 89.8, 77.5, 81.6};
    cout << "\nThe first high temperature is: " << hi_temps[0] << endl;
    hi_temps[0] = 100.7;
    cout << "\nThe first high temperature is: " << hi_temps[0] << endl;

    // Uninitialized array, dont do that
    int test_scores[5];
    cout << test_scores[0] << endl;
    cout << test_scores[1] << endl;
    cout << test_scores[2] << endl;
    cout << test_scores[3] << endl;
    cout << test_scores[4] << endl;

    // Initialize first two elements to 33 and 55, rest to 0
    int test_scores2[5]{33, 55};
    cout << test_scores2[0] << endl;
    cout << test_scores2[1] << endl;
    cout << test_scores2[2] << endl;
    cout << test_scores2[3] << endl;
    cout << test_scores2[4] << endl;

    // multi dimensional array
    const int rows{3};
    const int cols{4};

    int movie_rating[rows][cols]{
        {0, 4, 3, 5},
        {0, 1, 4, 5},
        {0, 2, 5, 5},
    };
}