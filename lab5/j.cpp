/*
You’re given string s which is not palindrome. You need to answer, is that possible, if we add one letter
to s such that s will become palindrome.
*/
#include <iostream>
#include <algorithm> 
using namespace std;
int main(){
string s;
cin >> s ;
string t = s;
string a = s;
reverse (a.begin(),a.end());
if (a == t )
cout << "YES";


else {
reverse (s.begin()+1, s .end());
if (s==t)
cout <<"YES";
else
cout << "NO";}


return 0;
}