#include<iostream>
using namespace std;
int main()
{
    int check , check1 = 0;
    int num[]={10,20,100,5,22};
    cout<<"Enter the number to check the index: ";
    cin>> check;
    for(int i = 0; i < 5; i++){   
     if (check==num[i]){
        cout<<num[i]<<" is at index "<< i;
        check1 = check;
        }
    }
    if(check1 != check) 
    cout<<check<<" does not exists." ;
}