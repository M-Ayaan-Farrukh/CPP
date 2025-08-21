#include<iostream>
using namespace std;
int main(){
    
    float discount, price, finalprice;
    cout<<"What is the price of the product: ";
    cin>>price;

    if(price >= 1 && price <= 500){
    discount=  0.05; 
    } else if (price > 500){
    discount = 0.10;  
    } else{
        discount=0; 
    }


    finalprice = price - (price * discount);

    cout<<"Price of the product= "<< price << endl; 
    cout<<"Discount= "<< discount << "%" << endl;
    cout<<"Price after discount= "<< finalprice << endl;


}