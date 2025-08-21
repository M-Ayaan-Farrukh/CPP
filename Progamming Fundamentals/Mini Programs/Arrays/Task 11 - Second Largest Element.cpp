#include <iostream>
using namespace std;
int main(){
	int num1 = 0, num2 = 0;
	int arr[] = {3, 4, 8, 7, 6,};
	for(int i=0; i<5; i++){
		  if(arr[i] > num1) num1 = arr[i];
}
for(int j=0; j<5; j++){
	  if(arr[j] < num1 && num2 < arr[j]) num2 = arr[j];
}
	cout<<num1<<"\n"<<num2;
}
