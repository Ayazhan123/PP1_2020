//Find all exact squares of natural numbers that do not exceed a given number N.

#include <iostream>
#include <cmath>
using namespace std;
int main (){

    int n ;
    cin >> n;
    for (int i=1 ; i<= n ; i++) 
    { 
        if (i*i <=n) cout << i*i << endl;
        else break;
        

    }

    return 0 ;
}