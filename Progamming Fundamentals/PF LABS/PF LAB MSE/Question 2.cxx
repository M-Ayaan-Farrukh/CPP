#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter a Number: ";
    cin>>n;
    
    if((n % 3 == 0) && (n % 5 == 0)){
        cout<<"Magic Number";
    }
    else if((n % 3 == 0) && (n % 5 != 0)){
        cout<<"Divisible  by 3 only";
    }
    else if ((n % 5 == 0) && (n % 3 != 0)){
        cout<<"Dvisible by 5 only";
    }

    else{
        cout<<"Not a Magic Number";
    }

    
}