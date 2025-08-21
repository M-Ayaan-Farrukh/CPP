#include<iostream>
using namespace std;
int main()
{
    int sum , avg;
    int num[]={6,12,18,24,30,36};
    int lenght = sizeof(num)/sizeof(num[0]);

    for(int i = 0; i < lenght; i++){
        sum += num[i];
    }
    avg = sum/lenght;
    cout<<"Sum is "<<sum<<"\nAverge is "<< avg;

}