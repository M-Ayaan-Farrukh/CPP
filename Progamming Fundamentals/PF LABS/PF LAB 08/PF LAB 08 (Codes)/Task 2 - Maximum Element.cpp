#include<iostream>
using namespace std;
int main()
{
    int max = 0;
    int arr[5]={67,79,99,89,97};

    for(int i = 0; i < 5; i++)  
    {
        if(arr[i] > max){
            max = arr[i];
        }
    }
    cout<<max; 
}