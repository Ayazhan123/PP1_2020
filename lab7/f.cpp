#include <iostream>
using namespace std;

int cnt(string s , int i , int res){

    if (i==s.size()) return res;
    if (int(s[i]-'0')%2==0) return cnt(s,i+1 , res+1);
    return cnt(s, i+1 , res) ;

} 

int main(){

string n;
cin >> n ;
cout << cnt(n,0,0) ; 
cout << endl ;

    return 0 ;

}
