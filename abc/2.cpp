#include <bits/stdc++.h>
using namespace std;

int main(){
  string s;
  cin >> s;
  string k;
  s = s + "s";
  for(int i = 0; i < s.size(); i++){
    
    
    if(s[i] >= '0' && s[i] <= '9' && s[i+1] > 65){
      k+=s[i];
      int x;
      stringstream ss(k);
      ss >> x;
      cout << x << endl;
      k= "";
    }
    else if(s[i] >= '0' && s[i] <= '9'){
      k+=s[i];
    }
    else if(s[i] > 64){
      continue;
    }
  
  }

}