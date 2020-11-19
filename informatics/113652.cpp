#include <iostream>
using namespace std;

bool function(int a){

if (a==1) return true;
if(a<=0) return false ;
return function(a-3) + function(a-5) ;

}

int main(){

int n;
cin >> n;
cout << (function(n) ? "Yes" : "No") ;

    return 0;
}