#include <bits/stdc++.h>
using namespace std;

void f(int n, int m){
  
  if(n == 1) return;
  
  for(m = m; m <= m ; m++)
    if(n % m == 0){
      cout << m << " ";
      f(n / m, m);
      return;
  }
}
int main(){
  
  int x;
  cin>>x;
  
  f(x, 2);   
  
   return 0;
}