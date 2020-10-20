//Given n integers. In this task, you should find the maximum from these numbers.

#include <iostream>
using namespace std;
int main () {

   int n , maxi = -10 , i;
   cin >> n ;
      for (int i = 0 ; i < n ; i++ )
{
  int t;
    cin >> t ;
    if (t > maxi)  maxi=t ;
}
cout << maxi;
    return 0 ;
}