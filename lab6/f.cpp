#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

void val(string s , int n ){
    cin >> s ;
    cin >> n ;
    int cnt=0 ;
    for (int i=0 ; i < s.size() ; i++){
        if (s[i] > 47 && s[i] < 58)
           cnt++ ;
    }
    if (cnt >= n)
    cout << "YES" ;
    else cout << "NO" ;
}

int main(){
    
    string s ;
    int n ;
    val(s , n) ;

    return 0 ;
}