#include <iostream>
using namespace std;

void mini(int a , int b , int c , int d){

     
     cout << min(a , min(b, min(c,d))) ;

}

int main(){

    int a , b , c , d ;
    cin >> a >> b >> c >> d ;
    mini(a,b,c,d);

    return 0 ;
}