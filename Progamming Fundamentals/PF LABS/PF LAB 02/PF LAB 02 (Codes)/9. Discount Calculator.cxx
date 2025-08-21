#include<iostream>
using namespace std;
int main(){
    float price, discount = 0, finalprice ;
    cout<<"Enter the Price of the product: ";
    cin>> price;

    if (price >= 5000){
        discount = 0.30;
    }
    else if (price >= 2500){
        discount = 0.20;
    }
    else if (price >= 1000){
        discount = 0.5;
    }
    else if (price <=1000){
        discount = 1;
    }    
    
    finalprice = price * discount;

    cout<<"Orignal Price: "<< price << endl;
    cout<<"Discount: "<< discount << "%" << endl;
    cout<<"Final price after discount:$ "<< finalprice << endl;

}