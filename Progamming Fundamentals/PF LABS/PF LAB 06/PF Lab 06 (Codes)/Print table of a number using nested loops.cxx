#include <iostream>
using namespace std;

int main() {
    int number, limit;

    cout << "Enter the number to print its table: ";
    cin >> number;
    cout << "Enter the limit for the table: ";
    cin >> limit;

    for (int i = 1; i <= limit; i++) {
        cout << number << " x " << i << " = " << number * i << endl;
    }

    return 0;
}
