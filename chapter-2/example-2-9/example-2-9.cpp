#include <iostream>

using namespace std;

int main() {
    // Type conversion
    cout << "static_cast<int> (7.9) = " 
        << static_cast<int> (7.9) << endl;

    cout << "static_cast<double>(25) = " 
        << static_cast<double>(25) << endl;

    cout << "static_cast<double>(15 / 2) = " 
        << static_cast<double>(15 / 2) << endl;

    cout << "static_cast<double>(15) / 2 = " 
        << static_cast<double>(15) / 2 << endl;

    cout << "static_cast<int>(7.8 + static_cast<double>(15 / 2)) = "
        << static_cast<double>(7.8 + static_cast<double>(15) / 2) / 2 << endl;

    return 0;
}