#include <iostream>

using namespace std ;
int main (){
  
  int n;
  cin >> n ;
  int a=(n/100000)+((a/10000)%10);
  int b=((n%100)/10)+(n%10) ;
  if (a==b) {
      cout << "YES";
  } else {
      cout <<"NO";
  }
    return 0;
}