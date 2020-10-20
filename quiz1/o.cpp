#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int a,b;
    string n;
    cin >> a >> n >> b ;
    if (n=="+"){
        cout << a << n << b << "=" << (a+b);
    } else 
    if (n=="*"){
        cout << a << n << b << "=" << (a*b);
    } else
    if (n=="-"){
        cout << a << n << b << "=" << (a-b);
    } else
    if (n=="/"){
        cout << a << n << b << "=" << (a/b);
    } 
    return 0;
}