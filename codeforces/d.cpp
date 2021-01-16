#include <iostream>
#include <cmath>

using namespace std;

int discr(int a,int b,int c){
    return (b*b)-4*a*c ;
}

int main(){

int a , b , c ;
cin >> a >> b >> c ;

cout << (b*(-1) + sqrt(discr(a,b,c)))/(2*a) << endl;
cout << (b*(-1) - sqrt(discr(a,b,c)))/(2*a) << endl;


    return 0;
}