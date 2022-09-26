#include <iostream>

using namespace std;

int main() {
    int inches;

    inches = 100;

    /* 
    *****This allows to input data from user*****
    
    cout << "Enter total inches and press Enter: ";
    cin >> inches;
    cout << endl;
    */

    cout << inches << " inch(es) = ";
    cout << inches / 12 << " feet (foot) and ";
    cout << inches % 12 << " inch(es)" << endl;

    return 0;
}