#include<iostream>
using namespace std;
int main(){
    char operation;
    float num1, num2;

    cout <<"Enter an operator (/, +, -, *): ";
    cin >> operation;
    cout<<"Enter first number: ";
    cin>> num1;
    cout<<"Enter second number: ";
    cin>> num2;

    switch(operation){
        case '+':
        cout << num1 << "+" << num2 << "=" << num1 + num2 << endl;
        break;
         case '-':
        cout << num1 << "-" << num2 << "=" << num1 - num2 << endl;
        break;
         case '*':
        cout << num1 << "*" << num2 << "=" << num1 * num2 << endl;
        break;
         case '/':
         if (num2 != 0){
            cout << num1 << "/" << num2 << "=" << num1 / num2 << endl;
         }else{
            cout<<"Error"<< endl;
         }
         break;
       default:
    cout<<"Invalid operation" << endl;  
     }
}