#include <iostream>

using namespace std;

void percent(double a , double g){

    double per ;
    per = (g*100)/a ;
    cout << per ;

}

int main(){

    double a , b ;
    cin >> a >> b ;
    percent(a,b);


    return 0 ;
}