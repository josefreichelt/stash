
#include <iostream>

int main()
{
    using namespace std;
    int counter{10};
    int result{0};

    // simple increment
    // cout << "Counter: " << counter << endl;

    // counter = counter + 1;
    // cout << "Counter: " << counter << endl;

    // counter++;
    // cout << "Counter: " << counter << endl;

    // ++counter;
    // cout << "Counter: " << counter << endl;

    // Pre increment
    // cout << "Counter: " << counter << endl;
    // result = ++counter;
    // cout << "Counter: " << counter << endl;
    // cout << "Result: " << result << endl;

    // Post increment
    // cout << "Counter: " << counter << endl;
    // result = counter++;
    // cout << "Counter: " << counter << endl;
    // cout << "Result: " << result << endl;

    // Pre with extra addition
    // cout << "Counter: " << counter << endl;
    // result = ++counter + 10;
    // cout << "Counter: " << counter << endl;
    // cout << "Result: " << result << endl;

  // Post with extra addition
    cout << "Counter: " << counter << endl;
    result = counter++ + 10;
    cout << "Counter: " << counter << endl;
    cout << "Result: " << result << endl;

    cout << endl;
}