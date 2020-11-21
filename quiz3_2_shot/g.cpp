#include <iostream>
using namespace std;

char functionR(string a , int i ){  

if (a[i]>='A' && a[i]<='Z' && i<= a.size()-1) return a[i] ;

if (i==a.size()) return 'a' ;

return functionR(a , i+1 );

}

int main(){

string s;
getline(cin, s) ;
char result = functionR(s , 0);
if (result == 'a')
cout << -1 ;
else
cout << result ;
    return 0;
}