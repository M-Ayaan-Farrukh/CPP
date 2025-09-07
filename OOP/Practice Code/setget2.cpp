#include<iostream>
using namespace std;

class BankAccount{
    private:
        string accountHolder;
        int accountNumber;
        double balance;
    public:
        void setaccname(string name){
            accountHolder = name ;
        }
        void setaccbal(double b){
            balance = b;
        }
        void setaccnumber(int accnum){
            accountNumber = accnum ;
        }
        
        // getters

        string getaccname(){
            return accountHolder;
        }
        int getaccnumber(){
            return accountNumber;
        }
        double getaccbal(){
            return balance;
        }

        void deposit(float amount){
            balance += amount;
        }
};

int main() {
        BankAccount acc1;

        string name;
        int number;
        double balance, depositamount;

        cout<<"Enter The Account Holder Name:";
        getline(cin,name);
        cout<<"Enter The Account Number:";
        cin>> number;
        cout<<"Enter initial balance:";
        cin>> balance;

        acc1.setaccname(name);
        acc1.setaccnumber(number);
        acc1.setaccbal(balance);

        cout<<"Enter the Amount to deposit:";
        cin>> depositamount;
        acc1.deposit(depositamount);

        cout<<"\n----Account Details-----";
        cout<<"\nAccount Name:"<< acc1.getaccname();
        cout<<"\nAccount Number:"<< acc1.getaccnumber();
        cout<<"\nAccount Balance:"<< acc1.getaccbal();
        return 0;
}