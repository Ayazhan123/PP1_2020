/*
You’re given string s, you need to shift all characters in s to the next character in alphabetical order. If
our character is ’z’ change it for ’a’
*/

#include <iostream>
#include <string>
using namespace std;
int main(){
    string s ;
    cin >> s ;
    for (int i=0 ; i<s.size() ; i++){
        if (s[i]>='a' && s[i]<'z')
       s[i]++ ;
         else if (s[i]='z') s[i]='a';
         cout << s[i];
    }   
    
     return 0;
}