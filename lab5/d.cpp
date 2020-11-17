//You’re given string s, you need to print, is this string palindrome or not.

#include <iostream>
#include <string>
using namespace std;
int main (){
    
    string str;
    cin >> str ;
    bool p=true;
    for (int i=0 ; i<str.size() ; i++){
        if (str[i] != str[str.size()-1-i]) p=false ;
    }
    if (p==true){
        cout << "YES";
    } else {
        cout << "NO";
    }
  return 0 ;    
   
}