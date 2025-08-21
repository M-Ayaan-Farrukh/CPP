#include <iostream>
using namespace std;
int main(){
	 int num;
	 int new_Array[5];
	 int arr[] = {3, 4, 2, 6, 5};
	 for(int i=0; i<5; i++){
	 	  int mainIndex = i;
	 	  for(int j=i+1; j<5; j++){
	 	  	  if(arr[j] < arr[mainIndex]){
	 	  	  	 mainIndex = j;
								}    
					}
					int temp = arr[mainIndex];
					arr[mainIndex] = arr[i];
					arr[i] = temp;
					
		}
		for(int i=0; i<5; i++) cout<<arr[i];
}
