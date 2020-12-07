#include <iostream>     
#include <algorithm>  
#include <vector>  

using namespace std;

int main(){

  vector <char> v;
  string s;
  cin >> s;

  for(int i=0 ; i<s.size() ; i++){
      v.push_back(s[i]) ;
  }

  sort (v.begin() , v.end());

cout << "The anagram variants for string " << s << " are: \n" ;
  do {
    for(int i=0 ; i<v.size() ; i++){
    cout << v[i]  ;  
}
cout << endl ;
  } while (next_permutation(v.begin() , v.end()) );
  
  return 0;
}