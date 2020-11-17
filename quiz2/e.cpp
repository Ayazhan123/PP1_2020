#include <iostream>
#include <sstream>
#include <algorithm>
using namespace std;
string s;
int a[10];
int main(){
 cin >> s;
 for(int i = 0 ; i < 10 ; ++i){
      a[i]=0;
 }
 for(int i= 0; i < s.size(); ++i){
     a[s[i]-'0']+=1;
 }
 for(int i=0 ; i < 10; ++i){
     if (a[i] != 0) cout << i << ": " << a[i] << "\n";
 }
return 0 ;
}