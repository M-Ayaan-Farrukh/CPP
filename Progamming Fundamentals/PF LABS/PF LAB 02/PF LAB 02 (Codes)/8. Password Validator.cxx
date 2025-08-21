#include <iostream> 
using namespace std;
int main(){
    string correct_password = "Ayaan123";
    string entered_password;
    cout<<"Enter the Password: ";
    cin>> entered_password;

    if(entered_password == correct_password){
        cout<<"Password is Valid. Access Granted!";
    }

    else {
        cout<<"Password is invalid. Access Denied!";
    }    

}
