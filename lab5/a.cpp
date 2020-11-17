//You’re given string s, you need to output amount of capital and small letters in string

#include <iostream>
#include <sstream>
using namespace std;
int main (){
    
    string str;
    
    int cap=0 , small=0 ;
    cin >> str ;
   for ( int i=0 ; i < str.size() ; i++){
       int x=int(str[i]);
        if (x>64 && x<91) {
            cap++ ;
        } else if (x>96 && x<123){
            small++ ;
        }
     } cout << small << " " << cap ; 
    
  return 0 ;    
   
}