#include <iostream>
using namespace std ;
int main (){
    
    int n , b , a ;
    long rub , kop ;
    cin >> a >> b >> n;
    rub = a * n ;
    kop = b * n ;
    while (kop >= 100){
        kop = kop - 100 ;
        rub++ ;
    }
    cout << rub <<" "<< kop ;

    return 0 ;
}