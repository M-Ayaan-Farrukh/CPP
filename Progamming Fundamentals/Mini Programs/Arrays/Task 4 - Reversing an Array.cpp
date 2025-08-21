#include<iostream>
using namespace std;
int main(){
    int rev[]={20,30,40,50,69};
    int lenght = sizeof(rev)/sizeof(rev[0]);
    
    for(int i = lenght - 1; i >= 0; i--)
    {
        cout<<rev[i]<<" ";
    }
}
