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
}