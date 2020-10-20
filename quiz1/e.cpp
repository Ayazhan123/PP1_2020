#include <iostream>
using namespace std ;
int main (){
    int n , m , sum = 0 ;
    cin >> n; 
    while (n) {
         m=n%10 ;
         sum+=m ;
         n/=10;
    } 
    cout << sum ;
    return 0;
}