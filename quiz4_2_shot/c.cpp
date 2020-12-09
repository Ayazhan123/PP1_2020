#include <iostream>
#include <cmath>

using namespace std;

bool  prime(long n){
    
    bool res=false ;

    for(long i=2 ; i<= sqrt(n) ; i++) 
    if( (n%i)==0) res = true ;
    
    if (res==true || n==1) return false ;
    else return true ;
}

int main(){

  int n;
  cin >> n ;

  int num = 1, cnt1 = 0 , cnt2=0 ;
    while (1) {
        num++;
        if(prime(num)){
            cnt1++;
        }
        if(prime(num) && prime(cnt1)){
            cnt2++;
        }
        if(cnt2==n){
            cout << num ;
            break ;
        }
    }

    return 0 ;
}