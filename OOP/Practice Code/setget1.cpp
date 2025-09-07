#include<iostream>
using namespace std;

class Student{
    private:
        string name;
        int rollno;
    public:
        void setname (string n){
            name = n;
        }


        void setroll (int r){
            rollno = r;
        }
            
        

        int getrollno (){
            return rollno;
        }
        string getname(){
            return name;
        }

    };
int main(){
    string name;
    int rollno;
    Student s1;
    cout<<"Enter Your name:";
    getline(cin,name);
    cout<<"Enter Your Rollno:";
    cin>> rollno;
    s1.setname(name);
    s1.setroll(rollno);

    cout<<"\n----Student Information----";
    cout<<"\nName:"<<s1.getname();
    cout<<"\nRollno:"<<s1.getrollno();
    
    return 0;

    
    
};