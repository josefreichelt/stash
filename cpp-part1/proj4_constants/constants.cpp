// Constants and number of rooms
#include <iostream>

using namespace std;

int main() {
    cout << "Welcome to cleaning program" << endl;
    cout << "\nHow many rooms?" << endl;

    int numberOfSmallRooms{0};
    int numberOfLargeRooms{0};
    const double pricePerSmallRoom{25.0};
    const double pricePerLargeRoom{35.0};
    const double taxRate{0.06};

    cout << "Number of small rooms to clean: " << numberOfSmallRooms << endl;
    cin >> numberOfSmallRooms;
    cout << "Number of large rooms to clean: " << numberOfLargeRooms << endl;
    cin >> numberOfLargeRooms;
    cout << "Price per small room: €" << pricePerSmallRoom << endl;
    cout << "Price per small room: €" << pricePerLargeRoom << endl;

    double priceOfSmallRooms = pricePerSmallRoom * numberOfSmallRooms;
    double priceOfLargeRooms = pricePerLargeRoom * numberOfLargeRooms;
    double roomsTotal = priceOfSmallRooms + priceOfLargeRooms;
    double costOfTax = roomsTotal * taxRate;

    cout << "Cost: €" << roomsTotal << endl;
    cout << "Tax: €" << costOfTax << endl;
    cout << "==================================" << endl;

    cout << "Total estimate: €" << roomsTotal + costOfTax << endl;
    cout << "This estimate is valid for " << 30 << " days" << endl;

    return 0;
}