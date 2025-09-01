#include<iostream>
using namespace std;
int main(){
    string cars[] = {"BMW","TOYOTA","HONDA","KIA","HYUNDAI"};

    cout<<"Car Lists:"<< endl;

    for(int i = 0; i < 5; i++){
        
        cout<< i+1 <<". "<< cars[i]<<endl;
    }

}