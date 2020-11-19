#include <iostream>
using namespace std;

string function(string a , string res , int i ){

if (i >= a.size()) return "";    

if (i==a.size()-1) return res + a[i];

return function(a , res+a[i]+char(42)  , i+1 );

}


int main(){

string s;
getline(cin, s) ;
cout << function(s, "" , 0) ;

    return 0;
}