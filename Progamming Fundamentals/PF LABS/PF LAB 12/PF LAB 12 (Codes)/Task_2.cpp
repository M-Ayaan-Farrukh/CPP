#include <iostream>
using namespace std;

int main() {
    int a = 25, b = 40;
    int* pA = nullptr, * pB = nullptr;

    pA = &a;
    pB = &b;

    *pA = *pA + *pB;
    *pB = *pA - *pB;
    *pA = *pA - *pB;

    cout << "a = " << *pA << endl;
    cout << "b = " << *pB << endl;

    return 0;
}
