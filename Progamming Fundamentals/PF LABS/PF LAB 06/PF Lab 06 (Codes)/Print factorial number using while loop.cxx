#include<iostream>
using namespace std;
int main(){
 int num, factorial = 1;

 cout<<"Enter a number for factorial: ";
 cin >> num;

 int i = 1;
 while(i <= num){
    factorial *= i;
    i++;
 }
 cout<<"The Factorial of number "<< num << " is: " << factorial << endl;
}