#include <iostream>
using namespace std;
int main(){
	int arr[] = {8, 3, 3, 2, 3, 2, 8};
	int size = sizeof(arr)/sizeof(arr[0]);	
	for(int i=0; i<size; i++)   
		 for(int j=i+1; j<size; j++){ 
		 	 if(arr[i] == arr[j]){
         for(int k=j; k<size-1; k++) arr[k] = arr[k+1];   
									size--;
					 }
    }

for(int l=0; l<size; l++) cout<<arr[l];
}
