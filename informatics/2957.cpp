#include <iostream>
using namespace std ;
int main (){
    
    int a , b , n , m ;
    cin >> a >> b ;
    n = a%b ;
    m = b%a ;
    cout << n * m +1 ;

    return 0 ;
}