#include<iostream>
using namespace std;
int main()
{
   int n;
   cout <<"Enter the number of terms: ";
   cin>> n;

   int first = 0, second = 1, next ;

   cout<<"Fibonuccci Series: " << first << " "<< second << " ";

   for(int i = 3; i <=n; i++ ){
   next = first + second;
   cout << next << " ";
   first = second;
   second = next;

  }


}