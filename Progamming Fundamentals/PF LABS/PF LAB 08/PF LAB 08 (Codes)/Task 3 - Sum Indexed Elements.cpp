#include<iostream>
using namespace std;
int main()
{
    int sum = 0;
    int arr[6]={5,10,15,20,25,30};

    for(int i = 0; i < 6; i += 2){
        sum += arr[i];
    }
    cout<<"Sum of Even Indexed Element is: "<< sum;


}