#include <iostream>
using namespace std;

void maxi(int a , int b , int c , int d){

     
     cout << max(a , max(b, max(c,d))) ;

}

int main(){

    int a , b , c , d ;
    cin >> a >> b >> c >> d ;
    maxi(a,b,c,d);

    return 0 ;
}