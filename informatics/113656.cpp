#include <iostream>
using namespace std;

string function1(string a , string res , int i ){

if (i==a.size()/2) return res + a[i] ;

return function1(a , res+a[i]+char(40)  , i+1 );

}


string function2(string a , string res , int i ){

if (i>=a.size()) return "";

if (i==a.size()-1) return res + a[i] ;

return function2(a , res+a[i]+char(41)  , i+1 );

} 

int main(){

string s;
getline(cin, s) ;
cout << function1(s, "" , 0) ;
cout << function2(s, "" , s.size()/2-1) ;

    return 0;
}