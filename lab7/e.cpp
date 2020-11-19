#include <iostream>
using namespace std;

bool uni (int n){
    if(n==1)return true;
    if (n % 2 != 0)return false;
    return uni(n/2) ;
}

int main(){

int n;
cin >> n ;
cout << (uni(n) ? "Yes" : "No") ;

    return 0 ;

}