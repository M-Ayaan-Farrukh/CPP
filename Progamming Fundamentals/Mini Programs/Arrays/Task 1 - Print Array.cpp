#include<iostream>
using namespace std;
int main()
{
    int num[] = {20,30,40,50,60};

    for(int i = 0; i < sizeof(num)/sizeof(num[0]); i++)
    {
        cout<<num[i]<<"\n";
    }

}