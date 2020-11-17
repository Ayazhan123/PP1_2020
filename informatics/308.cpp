#include <iostream>
using namespace std;

bool Xor(bool a , bool b){

    if (a==true && b==false) return true;
    if (a==false && b==true) return true;
    if (a==false && b==false) return false;
    if (a==true && b==true) return false; 
    return false;
}

int main(){

    int a , b ;
    cin >> a >> b ;
    cout << (Xor(a,b) ? "1" : "0") ;

    return 0 ;
}