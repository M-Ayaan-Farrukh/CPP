#include<iostream>
using namespace std;
int main()
{
    int nnn;
    cout<< "Enter the number for fibanooci sequence: ";
    cin>>nnn;

    int firstterm=0 , secondterm=1, a = 0;
    cout<<"Fibonacci Sequence: ";
    while (a < nnn ) {
        cout<< firstterm << " ";
        int next = firstterm + secondterm;
        firstterm = secondterm;
        secondterm = next;
        a++;

    }

}