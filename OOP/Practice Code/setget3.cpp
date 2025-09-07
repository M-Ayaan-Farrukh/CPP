#include<iostream>
using namespace std;

class Car{
    private:
        string brand;
        string model;
        int year;
        float mileage;
        float calc;
        float km;
    public:
        float price;
        float fuel= 281.0;
        void setbrand(string g){
            brand = g;
        }
        void setmodel(string b){
            model = b;
        }
        void setyear(int y ){
            year = y;
        }
        void setmil(float m){
            mileage = m;
        }
        
        string getbrand(){
            return brand;
        }
        string getmodel(){
            return model;
        }
        int getyear(){
            return year;
        }
        float getmil(){
            return mileage;
        }

        void drive(float k){   
            km =k;
            
            calc = km / mileage ;

        }
        float getds(){
            return km;
        }
        float getavg(){
            return calc;
        }
        float pricew(){
            return price = calc * fuel;
        }
       
        
    };

int main(){
    Car c1;
    string brand;
    string model;
    int year;
    float mileage;
    float km;
    cout<<"Enter Your Car Brand:"<<endl;
    getline(cin,brand);
    cout<<"Enter Your Car Model:"<<endl;
    getline(cin,model);    
    cout<<"Enter Your Car Year:"<<endl;
    cin>>year;
    cout<<"Enter Your Car Mileage:"<<endl;
    cin>> mileage;
    cout<<"Enter the Distance(km):"<<endl;
    cin>> km;
    c1.setbrand(brand);
    c1.setmodel(model);
    c1.setmil(mileage);
    c1.setyear(year);
    c1.drive(km);

    cout<<"\n----CAR INFORMATION----\n";
    cout<<"Car Brand:"<< c1.getbrand()<<endl;
    cout<<"Car Model:"<< c1.getmodel()<<endl;
    cout<<"Car Year:"<<c1.getyear()<<endl;
    cout<<"Car Mileage:"<< c1.getmil()<<endl;
    cout<<"Average: Your car will do "<<c1.getavg()<<" km/l on distance of "<<c1.getds()<<"km.Which will approximately will cost you "<<c1.pricew()<<"/- Rs";








};  