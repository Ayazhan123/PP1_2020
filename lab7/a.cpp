#include <iostream>
using namespace std;
 
int degree(int n){

    if (n==0) return 1;
    return degree(n-1)*2 ;

}

int main(){

    int a;
    cin >> a ;
    cout << degree(a);

    return 0 ;

}