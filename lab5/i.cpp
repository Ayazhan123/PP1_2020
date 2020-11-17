/*
Let’s call two strings s and t nearly equal, if amount of every letter in s and t is equal. You need to answer,
is two strings are nearly equal
*/

#include <iostream>
#include <sstream>
#include <algorithm>
using namespace std;
int main(){
string a,b;
cin >> a >> b;
sort(a.begin(), a.end());
sort(b.begin(), b.end());
if(a==b) cout <<"YES";
else cout <<"NO";
}