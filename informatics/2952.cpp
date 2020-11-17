#include <iostream>
using namespace std ;
int main (){
    
    int h1 , m1 , s1 , h2 , m2 , s2 , r ;
    cin >> h1 >> m1 >> s1 >> h2 >> m2 >> s2 ;
    
    r = (h2-h1)*3600 + (m2-m1)*60 + (s2-s1) ;
    
    cout << r ;

    return 0 ;
}