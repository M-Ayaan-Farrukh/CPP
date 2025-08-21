#include<iostream>
using namespace std;
int main(){
    int number, lowerlimit, upperlimit;
    cout<<"Set the lower limit of the range: ";
    cin>> lowerlimit;
    cout<<"Set the upper limit of the range: ";
    cin>> upperlimit;
    cout<<"Enter the number: ";
    cin>> number;

    if(number >= lowerlimit && number <= upperlimit){
        cout<< number <<" is within the range.["<< lowerlimit << "-" << upperlimit << "]";
    }
    
    else{
        cout<< number <<" is outside the range.["<< lowerlimit << "-" << upperlimit << "]";
    }
    

}