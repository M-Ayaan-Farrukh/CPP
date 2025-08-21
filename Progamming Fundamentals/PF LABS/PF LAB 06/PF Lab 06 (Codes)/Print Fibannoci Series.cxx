#include<iostream>
using namespace std;
int main (){
    int n;
    cout<<"Enter the number of terms: ";
    cin>> n;

    int first=0, second = 1,next, count = 0;

    cout<<"Fibonacci Series: ";
    while(count < n){
        cout<<first<<" ";
        next = first + second;
        first = second;
        second = next;
        count++;
    }

}
