//You’re given to strings, s and t,you need to check is the string t substring of string s.

#include <iostream>
#include <string>
using namespace std;
int main (){
    
    string s , t;
    cin >> s >> t ;
    if (s.find(t) != string::npos){
       cout << "YES" ;
    } else { 
        cout << "NO";
    }
    
  return 0 ;    
   
}