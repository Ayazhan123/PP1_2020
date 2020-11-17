#include <iostream>
using namespace std ;
int main (){
    
    int n , m , res;
    cin >> n >> m ;
    res = (n - m % n) % n ;
    cout << res ;

    return 0 ;
}