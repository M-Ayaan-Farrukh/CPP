#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter your Marks (Out of hundred):";
    cin>> n;
    if((n>100)||(n<0))
    cout<<"Invalid Number";
    else if (n>=90)
    cout<<"You got A+ Grade";
    else if (n>=80)
    cout<<"You got A Grade";
    else if (n>=70)
    cout<<"You got B Grade";
    else if (n>=60)
    cout<<"You got C Grade";
    else if (n>=50){
    cout<<"You got D Grade";
    }
    else if (n>=40){
    cout<<"You Failed";
    }
    return 0;
}
