//Given a single number x check is it perfect square or not? Perfect square is numbers like 4, 9, 25.

#include <iostream>
#include <cmath>
using namespace std;
int main (){

    int x;
    cin >> x;
    int n=sqrt(x);
    if (sqrt(x)==n) cout << "Yes" ;
    else cout << "No";

    return 0;
}