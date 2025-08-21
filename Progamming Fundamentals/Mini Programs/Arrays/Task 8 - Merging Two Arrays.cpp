#include <iostream>
using namespace std;

int main() {
    int a[] = {1, 3, 5, 7}, b[] = {2, 4, 6, 8}, c[8]; 
    int i = 0, j = 0, k = 0;
    while (i <  4 && j < 4) c[k++] = ( a[i]<b[j])?a[i++] : b[j++];
    while (i <4) c [k++] = a [i++];
    while (j< 4) c[k++] = b[j++];
    for (int x : c) cout << x << " ";
}
