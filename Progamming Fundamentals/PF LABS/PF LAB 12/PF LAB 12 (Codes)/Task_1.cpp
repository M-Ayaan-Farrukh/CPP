#include <iostream>
using namespace std;

int main() {
    int x = 10, y = 20, z = 30;
    int* ptr1 = nullptr, * ptr2 = nullptr, * ptr3 = nullptr;

    ptr1 = &x;
    ptr2 = &y;
    ptr3 = &z;

    int temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;

    *ptr3 = *ptr1 + *ptr2;

    *ptr1 = *ptr1 * 2;

    cout << "x = " << *ptr1 << endl;
    cout << "y = " << *ptr2 << endl;
    cout << "z = " << *ptr3 << endl;

    return 0;
}
