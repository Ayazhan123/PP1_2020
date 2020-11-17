#include <iostream>
#include <sstream>
using namespace std;
int main(){
string s , t ;
cin >> s >> t ;
for(int i=0;i<t.size();i++){
    if(t[i] != s[0]){
      cout<<t[i];
    }
}

return 0;
}