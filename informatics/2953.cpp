#include <iostream>
using namespace std ;
int main (){
    
    int n , m , res;
    cin >> n >> m ;
    res = m/n + 1 % (m % n + 1) ;
    cout << res ;

    return 0 ;
}