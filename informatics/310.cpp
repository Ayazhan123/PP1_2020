#include <iostream>
#include <cmath>
using namespace std;

void  prime(long n){
    
    bool res=false ;

    for(long i=2 ; i<= sqrt(n) ; i++) 
    if( (n%i)==0) res = true ;
    
    if (res==true || n==1) cout << "composite";
    else cout << "prime";
}

int main() {
    
    long x;
    cin >> x ;
    prime(x) ;

return 0;
}