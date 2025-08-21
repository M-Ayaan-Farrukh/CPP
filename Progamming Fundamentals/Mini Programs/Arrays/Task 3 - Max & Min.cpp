#include<iostream>
using namespace std;
int main()
{
    int num[] = {20,101,100,91,99};
    int lenght = sizeof(num)/sizeof(num[0]);
    int max = num[0];
    int min = num[0];

    for(int i = 0; i < lenght; i++){
        if(num[i] > max) max = num[i];

        else if(num[i] < min) min = num[i];
    }
    cout<<"Maximum Number is "<<max<<"\nMinimum Number is: "<<min;  
}