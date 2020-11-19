#include <iostream>
#include <algorithm>
using namespace std;
 
string f( string s , int n , int k){
    if (n==0){
        reverse (s.begin() , s.end());
        return s;
    }
    if (n%k > 9){
        s+= n%k - 10 + 'A';
    } else {
        s+= n%k + '0';
    }
    return f(s , n/=k , k);
}

int main(){

    int n, k ;
    cin >> n >> k ;
    string s = "";
    cout << f(s,n,k);

    return 0 ;

}