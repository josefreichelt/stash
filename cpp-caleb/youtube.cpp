#include <iostream>

using std::cin;
using std::cout;

int main() {
    int slices = 0;
    cout << "How many slices of pizza you want? ";
    cin >> slices;
    cout << "You have " << slices << " slices of pizza." << std::endl;
    return 0;
}