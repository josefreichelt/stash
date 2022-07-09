#include <iostream>
#include <vector>
using namespace std;

// Vector is a dynamic array and has bounds checking
int main()
{
    vector<char> vowels{'a', 'e', 'i', 'o', 'u'}; // Auto initialized to 0
    vector<int> test_scores(10, 5);                  // Initialize 10 ints to 5
    cout << "Hello vectors" << endl;
    cout << "Vowel: " << vowels.at(0) << endl;



    test_scores.push_back(80);
    test_scores.push_back(90); // Vector auto allocates memory

    cout << "Test scores: " << test_scores.at(10) << endl;
    cout << "Test scores: " << test_scores.at(15) << endl; // Throws an exception

}