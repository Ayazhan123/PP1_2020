#include <iostream>
using namespace std ;
int main (){
    
    int a , b , c , d , max ;
    cin >> a >> b ;

    c = a/b ;
    c =  ((c+2) / (c+1))%2 ;
    d = (c+1)%2 ;
    max = a * c + b * d ;

    cout << max ;
    return 0 ;
}