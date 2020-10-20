#include <iostream>
#include <cmath>
using namespace std;
int main () {

    int n , m  , c=0;
    cin >> n >> m ;
    while (m!=0) {
        if (m>n){
            c++ ;
        }
    
    n=m;
    cin >> m;
    if (n==0) break;
} 
cout<< c ;
    return 0;
}