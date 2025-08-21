#include<iostream>
using namespace std;
int main()
{
	int a , b , c , big ;
	cout<<"Enter 3 Numbers.";
	cin>>a>>b>>c;
	
	if(a>=b && a>=c)
	{
		cout<<"Largest number :"<<a;
	}
		if(b>=a && b>=c)
	{
		cout<<"Largest number :"<<b;
	}
		if(c>=b && c>=a)
	{
		cout<<"Largest number :"<<c;
	}
	return 0;
}