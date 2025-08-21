#include <iostream>
using namespace std;
int main(){
	int num, count;
	int arr[] = {1, 2, 3, 3, 2, 4, 1, 5, 2, 5};
	cout<<"Check frequency/occurence of: ";
	cin>>num;
	for(int i=0; i<=sizeof(arr)/sizeof(arr[0]); i++){
		 if(num == arr[i]) count++;
	}
	cout<<"Frequcny of "<<num<<" is "<< count;
}
