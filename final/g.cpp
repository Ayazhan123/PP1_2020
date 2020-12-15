#include <iostream>
#include <cmath>

using namespace std;

bool  prime_check(int n){
    
    bool res=false ;

    for(int i=2 ; i<= sqrt(n) ; i++) 
    if( (n%i)==0) res = true ;
    
    if (res==true || n==1) return false ;
    else return true ;
}

int main(){

    int x;
    cin >> x;

    for(int i=2 ; i<x ; i++){
        if(prime_check(i) && prime_check(x-i)){
            cout << i << " " << x-i << endl ;
            break ;
        }
    }

    return 0 ;
}