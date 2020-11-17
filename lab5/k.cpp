/*
You’re given string s consisting of small letters, output amount of vowel letters. In english vowel letters
are a, e, i, o, and u. (letter ’y’ is sometimes vowel, but in this problem we don’t take it for the answer)
*/
#include <iostream>
#include <sstream>
using namespace std;
int main (){
string str;
int n=0 ;
getline(cin , str);
for(int i=0;i<str.size();i++){
    if(str[i]='a' && str[i]='e' && str[i]='i' && str[i]='o' && str[i]='u') n++ ;
}
cout << n ;
}