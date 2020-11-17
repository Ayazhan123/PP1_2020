#include <iostream>
#include <sstream>
#include <algorithm>
using namespace std; 
  
int main() 
{ 
    string str ;
    int a[str.size()];
    getline (cin , str);
  for(int i=0 ; i<str.size() ; i++){
      if( a[str[i]]==1 ){
      cout << str[i];
      a[str[i]]==0;
  }
  a[str[i]]=1;
}
    return 0; 
} 