#include<iostream>
using namespace std;

class Students{
    public:
    string name;
    int reg_no;
    int age;

};

int main(){
    Students s1;
    s1.name = "Ayaan";
    s1.reg_no = 300;
    s1.age = 18;

    cout<<"Name: "<< s1.name;
    cout<<"\nReg No: "<< s1.reg_no;
    cout<<"\nage: "<<s1.age ;
    
}