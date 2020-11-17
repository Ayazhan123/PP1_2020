/*
You’re given integer N, you need to answer, is the sum of digits in odd positions is equal to sum of digits
in even positions
*/

#include <iostream>
#include <string>
using namespace std;
int main (){
   
    string s ;
    cin >> s ;
    int sumi1=0 ; 
    int sumi2=0 ;
    for (int i=0 ; i<s.size() ; i++){
        if (i%2==0) {   
            sumi1+= s[i]- '0';
        } else sumi2+= s[i]-'0';
    }
    if (sumi1==sumi2){
        cout << "YES";
    } else {
        cout << "NO";
    }
   
  return 0 ;    
   
}