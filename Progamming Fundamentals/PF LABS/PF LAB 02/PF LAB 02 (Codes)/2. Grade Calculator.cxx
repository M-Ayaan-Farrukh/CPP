#include <iostream>
using namespace std;

int main()
{
    int marks;
    cout << "Enter the marks (out of 100): ";
    cin >> marks;

    if ((marks > 100) || (marks < 0)) {
        cout << "It is not possible.";
    } 
    else if (marks >= 90) {
        cout << "You got A+ Grade.";
    } 
    else if (marks >= 80) {
        cout << "You got A Grade.";
    } 
    else if (marks >= 70) {
        cout << "You got B Grade.";
    } 
    else if (marks >= 60) {
        cout << "You got C Grade.";
    } 
    else if (marks >= 50) {
        cout << "You got D Grade.";
    } 
    else {
        cout << "You failed.";
    }

    return 0;
}