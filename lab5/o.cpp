#include <iostream>
#include <sstream>
#include <algorithm>
using namespace std;
int main (){
    
    string s ;
    cin >> s;
    string t;
    t=s;
    sort (t.begin() , t.end());
        cout <<t[t.size()-1];
    
  return 0 ;    
   
}